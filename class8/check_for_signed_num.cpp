#include <iostream>
using namespace std;

int main()
{

    // initialize variable.
    int x;

    // taking input from user.
    cout << "Enter a number: ";
    cin >> x;

    // checking for negative number
    if (x < 0)
    {
        cout << x << " is a negative number" << endl;
    }
    // check for postive number.
    if (x > 0)
    {
        cout << x << " is a postive number." << endl;
    }

    if (x == 0)
    {
        cout << x << " is a zero" << endl;
    }
}