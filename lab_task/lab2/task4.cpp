#include <iostream>
using namespace std;

int main()
{
    // Task 4: Write a program to swap two variables without using a third variable.
    int x, y;
    x = 10;
    y = 20;

    cout << "before swaping x=" << x << " and y=" << y << endl;
    x = x + y; // 10 + 20 = 30
    y = x - y; // 30 - 20 = 10
    x = x - y; // 30 - 10 = 20

    cout << "after swaping x=" << x << " and y=" << y << endl;
}