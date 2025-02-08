#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;
	a = 10,
	b = 9;
	d = 100;
	c = 20;

	int arr[4] = {a, b, c, d};
	int greatest = 0;

	for(int e: arr){
		if ( e > greatest){
			greatest = e;
		}
	}

	cout << greatest << " is the greatest value" << endl;


	return 0;
}