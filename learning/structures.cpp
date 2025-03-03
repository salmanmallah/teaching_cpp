#include <iostream>
using namespace std;

struct user_info {
	string name;
	int age;
	float weight;
};

typedef struct employee {
	string name;
	int age;
	bool graduated;
} ep;

union Data {
	char name;
	long long int id;
};

int main() {
	// user_info user_one;
	// user_one.name = "Salman Mallah";
	// user_one.age = 23;
	// user_one.weight = 69.8;

	// user_info user_two;
	// user_two.name = "Kinza";
	// user_two.age = 21;
	// user_two.weight = 34.5;

	// user_one
	// cout << user_one.name << endl;
	// cout << user_one.age << endl;
	// cout << user_one.weight << endl;

	// // user_two
	// cout << user_two.name << endl;
	// cout << user_two.age << endl;
	// cout << user_two.weight << endl;

	// using typedef then we use short name of that structure.
	// ep emp_one;
	// emp_one.graduated = false;
	// emp_one.name = "Salman Mallah";
	// emp_one.age = 23;

	// Data data;
	// data.name = 'S';
	// cout << data.name << endl;

	// data.id = 4150606180259;
	// cout << data.id << endl;
	// cout << data.name << endl;
	// return 0;
}
