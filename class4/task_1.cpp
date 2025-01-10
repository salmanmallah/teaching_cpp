#include <iostream>
using namespace std;

int main()
{
    // area of circle.
    // formula: pi* (r*r)
    // double result, pi, radius;
    // pi = 3.14;
    // radius = 10;
    // result = pi * (radius * radius);
    // cout << result;

    // area of rectangle.
    // formula: length x width
    // float length, width, area;
    // length = 30.5;
    // width = 10.5;
    // area = length * width;
    // cout << area;

    // area of triangle;
    // A = ½ * (b * h)

    double base, height, area, half;
    base = 30.3;
    height = 6.5;
    half = 0.5;

    area = half * (base * height);
    cout << area;
}