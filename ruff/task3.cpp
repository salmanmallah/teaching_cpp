#include<iostream>
using namespace std;

int main(){
    // Task 3: Write a program to swap two variables using a third variable.
    int x, y;
    x = 10;
    y = 20;

    cout << "before swaping x=" << x << " and y=" << y << endl;

    int temp = x;
    x = y;
    y = temp;
    
    cout << "after swaping x=" << x << " and y=" << y <<endl;


    
}