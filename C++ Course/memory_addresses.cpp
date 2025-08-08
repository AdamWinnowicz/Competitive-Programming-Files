#include <bits/stdc++.h>
using namespace std;

int main() {

    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    string name = "Adam";
    int age = 17;
    bool student = true;

    cout << &name << '\n'; // hexadecimal address
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}