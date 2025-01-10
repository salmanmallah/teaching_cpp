// Task 1: Write a program to calculate the area of circle, rectangle and triangle.
#include <iostream>
using namespace std;

int main()
{
    // area of circle
    // formula: pi*(r^2)

    // double area, pi, r;
    // pi = 3.14;
    // r = 10.5;
    // area = pi * (r*r);
    // cout << area;

    // area of rectangle.
    // formula: length * width

    double area, length, width;
    length = 10.5;
    width = 5.5;
    area = length * width;

    // results
    cout << "Length is: " << length << endl;
    cout << "Width is: " << width << endl;
    cout << "Area is of a rectangle:  " << area;
}