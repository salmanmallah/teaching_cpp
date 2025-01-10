#include <iostream>
using namespace std;

int main()
{
    // bill invoice
    // off 20%
    //     double bill, discount, discounted_money, total;

    //     cout << "Please Enter Total Bill: ";
    //     cin >> bill;
    //     cout << "Please Enter discount in percentage: ";
    //     cin >> discount;

    //     discounted_money = ((float)discount / 100.0) * (float)bill;
    //     total = bill - discounted_money;
    //     cout << total << endl;

    // the user must input two numbers.
    // Then we print the sum by calculating (adding) the two numbers:

    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;
    cout << "Result: " << sum << endl;
}
