#include <iostream>
using namespace std;

int main() {
	//   cout << "something";

	int i = 1;
	int r = 10;
	bool one_to_ten_over = false;
	do {
		if (!one_to_ten_over) {
			// 1 to 10
			if (i == 10) {
				// cout << "I am inside the i==10" << endl;
				one_to_ten_over = true;
				continue;
			}
			cout << i << " ";
			++i;
		} else {
			// // 10 to 1
			cout << r << " ";
			r--;
		}
	} while (i <= 10 && r >= 1);
}