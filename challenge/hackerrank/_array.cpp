#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string std_input = "3 12345678912345 a 334.23 14049.30493";
	// cout << std_input << endl;

	// 1. creating sstream obj.
	istringstream iss(std_input);

	int a;
	long long b;
	char c;
	float d;
	double e;

	iss >> a >> b >> c >> d >> e;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	return 0;
}