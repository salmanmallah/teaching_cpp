#include <iostream>
using namespace std;

int main()
{
    // : Write a C++ program that checks if a number entered by the user is non-negative. If it is non-negative, print "Positive or Zero", otherwise, print nothing.

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (x >= 0)
    {
        cout << "Postive or Zero" << endl;
    }
}