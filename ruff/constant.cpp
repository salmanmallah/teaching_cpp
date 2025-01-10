#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    const string my_name = "Salman Mallah";
    int age = 20;
    double weight = 60.8;
    bool is_game_over = true;
    char sign = 'S';

    // cout << typeid(my_name).name() << endl;
    // cout << typeof(my_name);


    cout << typeid(my_name).name() << endl;
    cout << typeid(age).name() << endl;
    cout << typeid(weight).name() << endl;
    cout << typeid(is_game_over).name() << endl;
    cout << typeid(sign).name() << endl;
    
}