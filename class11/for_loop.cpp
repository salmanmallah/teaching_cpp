#include <iostream>
using namespace std;

int main()
{

    // syntax.
    // for (start; end; increament){ block of for loop}

    // int total = 0;

    // for (int i = 1; i <= 10; i++)
    // {
    //     total += i;
    //     cout << i << endl;
    // }

    // cout << "Total is: " << total << endl;

    // taking input from user.
    int user_input;
    cout << "Enter a number: ";
    cin >> user_input;

    int total = 0;

    for (int i = 1; i <= user_input; i++)
    {
        total += i;
        // cout << i << endl;
    }

    cout << "Total is: " << total << endl;
}