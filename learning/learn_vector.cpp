#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

	// remove element at index 1
	// v.erase(v.begin() + 1);

	// remove the last index.
	// v.erase(v.end() - 1);

	// Remove a Range of Elements from a Vector
	// 2 4
	
	v.erase(v.begin() + 2, v.begin() + 4);
	for (auto i : v) {
		cout << i << " ";
	}
	return 0;
}