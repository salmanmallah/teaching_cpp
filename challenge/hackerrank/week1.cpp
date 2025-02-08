#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	cout << "First week. ";
	cout << "Current Process ID: " << GetCurrentProcess() << endl;

	return 0;
}