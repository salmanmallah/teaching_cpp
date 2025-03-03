#include <iostream>
#include <set>
using namespace std;

// simple set Traverse;
void Traverse(set<int> &set) {
	int counter = 0;
	for (int e : set) {
		cout << counter << " " << e << endl;
	}
}

// function to travsers the set
void TraverseSet(set<int> &set) {
	int counter = 0;
	for (int element : set) {
		cout << counter << " " << element << endl;
	}
}

int main() {
	set<int> my_set = {10, 1, 9, 2, 8, 4, 7, 3, 10, 10, 10, 10, 6, 6, 7};
	Traverse(my_set);

	return 0;
}
