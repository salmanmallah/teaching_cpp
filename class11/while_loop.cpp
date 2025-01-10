#include <iostream>
using namespace std;

int main() {
	// concept
	// use for loop
	// run it n times. n was given by user.
	// n can be any number: 10
	// 0
	// 1
	// 2
	// 3
	// 4
	// 10
	// 0 + 1 + 2 + 3 + 4 + 10.

	// int n;
	// cout << "Enter a number: ";
	// cin >> n;

	// // cout << n << endl;

	// // int x = 0;
	// // x += i
	// // taking number from user.
	// int n;
	// cout << "Enter a number: ";
	// cin >> n;

	// /* declaring total var where values of i will be stored.*/
	// int total = 0;

	// int i = 0;
	// while (i <= n)
	// {
	//     cout << i << endl;

	//     // adding values of i in the total variable.
	//     total += i;
	//     i++;
	// }

	// // printing the value of total at the end.
	// cout << "Total is: " << total << endl;

	// why we use while loop?
	// when we don't know how much times a loop will run.

	// taking input from user.
	string user_input;

	
	// start of while loop.
	while (user_input != "q") {
		cout << "Enter your name or q: to quite the loop: ";
		cin >> user_input;
	
		cout << user_input << endl;
	}
}