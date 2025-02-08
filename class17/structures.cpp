#include <iostream>
using namespace std;

int main() {
	// person info. -> name => string, age => int, weight => double,

	// syntax
	// struct name_of_structure {
	// };

	// making a structure with name person.
	struct Person {
		string name;
		int age;
		float weight;
		bool is_educated;
	};

	Person p1;
	p1.name = "Salman";
	p1.age = 20;

	cout << p1.name << endl;
	cout << p1.age << endl;

	// Person p2;
	// p2.name = "Hamda";
	// p2.age = 19;
	// p2.weight = 40.5;

	// Person p3;
	// p3.name = "Hooriya";
	// p3.age = 18;
	// p3.weight = 40;

	return 0;
}