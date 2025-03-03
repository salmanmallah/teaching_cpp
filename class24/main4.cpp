#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <windows.h>

using namespace std;

// Function to execute a command and return output
string executeCommand(const char *cmd) {
	char buffer[128];
	string result;
	FILE *pipe = _popen(cmd, "r");
	if (!pipe)
		return "ERROR";
	while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
		result += buffer;
	}
	_pclose(pipe);
	return result;
}

// Function to get Computer Model, OS Name, and OS Version
void getSystemInfo() {
	cout << "Fetching System Information..." << endl;
	string sysInfo = executeCommand("systeminfo");
	cout << sysInfo << endl;
}

// Function to get saved WiFi passwords
void getWiFiPasswords() {
	cout << "\nFetching Saved WiFi Passwords..." << endl;
	string profiles = executeCommand("netsh wlan show profiles");
	stringstream ss(profiles);
	string line;
	vector<string> wifiNames;

	while (getline(ss, line)) {
		size_t pos = line.find(" : ");
		if (pos != string::npos) {
			wifiNames.push_back(line.substr(pos + 3));
		}
	}

	for (const string &wifi : wifiNames) {
		string command =
		    "netsh wlan show profile name=\"" + wifi + "\" key=clear";
		string wifiData = executeCommand(command.c_str());
		cout << "\nWiFi Name: " << wifi << endl;
		cout << wifiData << endl;
	}
}

int main() {
	getSystemInfo();
	getWiFiPasswords();
	return 0;
}
