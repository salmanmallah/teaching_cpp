#include <iostream>
using namespace std;

int main() {
	int user_age = 10;
	int total_ticket = 4;
	int ticket_price = 1000;

	int discounted_price = 0;

	if (user_age < 18) {
		// 50 % off. formula: (% off / 100) * listed price.

		discounted_price = (double(50) / double(100)) * ticket_price;
		ticket_price -= discounted_price;

		cout << "total price for " << total_ticket << " Tickets is "
		     << (ticket_price * total_ticket) << endl;
	} else if (user_age >= 60) {
		cout << "you got 30\% off" << endl;
	} else {
		cout << "total price for " << total_ticket << " Tickets is "
		     << (ticket_price * total_ticket) << endl;
	}

	return 0;
}