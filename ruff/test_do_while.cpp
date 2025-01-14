#include <iostream>
using namespace std;

int main() {
	// break / continue keywords.
	for (int i = 1; i <= 10; i++) {
		if (i == 2) {
			continue;
		}
		cout << i << endl;
	}
	return 0;
}