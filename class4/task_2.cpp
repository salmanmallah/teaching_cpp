#include <iostream>
using namespace std;

int main()
{
    // // ---------------------------------------------
    // // billing invoice
    // // bill 3000
    // // off 20%
    // // find 20% of 3000; xyz
    // // 3000 - xyz
    // //--------------------------------
    // double bill, off, find_off, final_price;
    // bill = 3000;
    // off = 20;

    // find_off = (20.0 / 100.0) * 3000;
    // final_price = bill - find_off;
    // cout << final_price << endl;
    // // ---------------------------------------------

    int x, y, z;

    x = 10;
    y = 20;

    cout << "BEFORE SWAPING" << endl;
    cout << x << endl;
    cout << y << endl;

    cout << "AFTER SWAPING" << endl;
    z = x;
    x = y;
    y = z;

    cout << x << endl;
    cout << y << endl;
}