#include <iostream>
using namespace std;

int main()
{

    // // user input.
    // long long n = 1000000000;
    // // cout << "Enter a number: ";
    // // cin >> n;
    // long long total = 0;
    // int i = 1;
    // do
    // {
    //     // cout << i << endl;
    //     total += i;
    //     i++;
    // } while (i <= n);

    // cout << total << endl;
    // int table = 2;
    // int i = 1;
    // do
    // {
    //     cout << table << " X " << i << " = " << (i * table) << endl;
    //     i++;
    // } while (i <= 10);

    // Write a C++ program to print numbers from 1 to 9 and then 10 to 1 using a do-while loop.
    // example output
    // 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1

    int i = 1;
    int r = 10;
    bool one_to_ten_over = false;
    do
    {
        if (!one_to_ten_over)
        {
            // 1 to 10
            if (i == 10)
            {
                // cout << "I am inside the i==10" << endl;
                one_to_ten_over = true;
                continue;
            }
            cout << i << " ";
            ++i;
        }
        else
        {
            // // 10 to 1
            cout << r << " ";
            r--;
        }
    } while (i <= 10 && r >= 1);
}