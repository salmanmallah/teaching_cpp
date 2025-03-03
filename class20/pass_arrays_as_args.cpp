#include <iostream>
using namespace std;

void my_function(int my_numbers[10]) {
	// comment
	int total_sum = 0;
	for (int i = 0; i < 10; i++) {
		total_sum += my_numbers[i];
	}
	cout << "Total sum of entire array is: " << total_sum << endl;
}

int main() {
	int my_array[10] = {100, 90, 70, 80, 50, 60, 30, 40, 20, 10};
	my_function(my_array);
	return 0;
}