#include<iostream>
using namespace std;

int main(){
    // task2:  Write a program to create a billing invoice, it should sum the prices of all items and apply discount of 20% on total bill

    int discount = 20;
    int total_bill = 3000;
    double discount_amount = (20.0/100.0) * total_bill;
    
    double discounted_bill  = total_bill - discount_amount;

    cout << "Total bill is: " << total_bill << endl;
    cout << "Price After 20% off " << discounted_bill;


}