#include <QtQuick/QQuickWindow>
#include <QtQuick/qml>
#include <QtWorldMap/WorldMap.h>

class MainWindow : public QQuickWindow {
	Q_OBJECT

  public:
	explicit MainWindow(QApplication &app) : QQuickWindow(app) { setupGui(); }

  private:
	void setupGui() {
		// Create main window
		setWindowTitle("Country Capitals Map");
		setBaseSize(800, 600);

		// Create a button to show information about a city
		QPushButton *btn = new QPushButton;
		btn->setText("Show City Info");
		connect(btn, &QPushButton::clicked, this, &MainWindow::showCityInfo);

		// Add layout and map
		QVBoxLayout *layout = new QVBoxLayout();
		layout->setContentsMargins(0, 0, 0, 0);
		layout->addWidget(btn);
		QWidget *container = new QWidget();
		container->setLayout(layout);
		container->setFixedSize(800, 600);

		// Initialize map
		MapWrapper *mapWrapper = new MapWrapper(this);
		QQuickWidget *mapWidget = new QQuickWidget();
		mapWidget->setContentsMargins(0, 0, 0, 0);
		mapWidget->setSource(mapWrapper->getMapSource());
		container->addWidget(mapWidget);

		// Add title
		QLabel *title = new QLabel("Country Capitals");
		title->setFont(QFont("Arial", 20, QFont::Bold));
		layout->insertWidget(0, title);
		layout->addWidget(container);
		this->setCentralWidget(container);
	}

	void showCityInfo() {
		// Implement method to show city information
		// For example, use a QMessageBox or modify the map display
	}
};

// MapWrapper class to handle QWorldMap initialization and markers
class MapWrapper {
  private:
	QQuickWindow *mainWindow;
	WorldMap *worldMap;

  public:
	explicit MapWrapper(QQuickWindow *window) : mainWindow(window) {
		// Initialize the map
		worldMap = new WorldMap();
		worldMap->setScreenRect(window->screen()->rect());
		worldMap->setCoordinateSystemType(WorldMap::GeoCoordinates);
		worldMap->setViewMode(WorldMap::Satellite);

		// Add countries and capitals
		addCountriesAndCapitals();
	}

	~MapWrapper() { delete worldMap; }

  private:
	void addCountriesAndCapitals() {
		// Example data: replace with real data from your application
		static const std::map<std::string, std::string> capitals = {
		    {"Germany", "Berlin"}, {"France", "Paris"},
		    // Add other countries as needed
		};

		worldMap->addCountries();

		for (const auto &pair : capitals) {
			if (auto country = worldMap->getCountryByCapital(pair.second)) {
				if (!country->capitals().contains(pair.first)) {
					// Create a custom marker for the capital
					LabelItem *item = new LabelItem(worldMap);
					item->setText(pair.first + ": " + pair.second);
					item->setScale(0.8);
					worldMap->addNewItem(
					    item, country->getCapitalCoordinates(pair.second));

					// Connect hover signal to show details
					connect(item, &LabelItem::hovered, this,
					        &MapWrapper::showCityInfoPopup,
					        Qt::ConnectionMode::Direct);
				}
			}
		}
	}

	void showCityInfoPopup(LabelItem *item) {
		QMessageBox msg(mainWindow);
		msg.setText("Detailed information about this city will appear here");
		msg.exec();
	}
};

int main() {
	QApplication app(argc, argv);
	MainWindow window(app);
	window.show();
	return app.exec();
}
