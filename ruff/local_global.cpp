#include <iostream>
using namespace std;

// global variable.
int g = 100;

int main()
{
    // local variables
    int g;

    cout << "Enter a number: ";
    cin >> g;

    cout << "Local variable: " << g << endl;
    cout << "Global variable: " << ::g << endl;
}