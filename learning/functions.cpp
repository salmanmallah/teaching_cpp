#include <iostream>
using namespace std;

void my_loop(int cycles) {
	for (int i = 1; i <= cycles; i++) {
		cout << i << endl;
	}
}

int main() {
	my_loop(10);
	return 0;
}