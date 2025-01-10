#include <iostream>
using namespace std;

int main()
{
    // n!; 5!; 1x2x3x4x5 = xyz.
    // 5
    // 4
    // 3
    // 2
    // 1

    int total = 1;

    for (int i = 5; i >= 1; i--)
    {
        total = total * i;
        cout << i << endl;
    }

    cout << "total is: " << total << endl;
}