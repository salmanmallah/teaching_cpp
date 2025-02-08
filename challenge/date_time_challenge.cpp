#include <cmath>
#include <ctime>
#include <iostream>
#include <windows.h>

using namespace std;
int main() {
	while (true) {

		time_t t = time(nullptr); // Declaring a time_t variable and assigning
		                          // the current time to it

		tm *time_ptr = localtime(&t); // convert to local time.

		system("cls");
		cout << "seconds: " << (time_ptr->tm_sec) << endl;
		cout << "minutes: " << (time_ptr->tm_min) << endl;
		cout << "hours: " << (time_ptr->tm_hour) << endl;
		cout << "Day: " << (time_ptr->tm_mday) << endl;
		cout << "Month: " << (time_ptr->tm_mon + 1) << endl;
		cout << "Year: " << (time_ptr->tm_year + 1900) << endl;

		Sleep(1000);
	}

	return 0;
}