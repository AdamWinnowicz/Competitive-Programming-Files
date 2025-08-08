#include <bits/stdc++.h>
using namespace std;

int myNum = 3; // myNum is a global variable

void printNum() {
    int myNum = 2;
    cout << myNum << endl;
}

int main() {

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 1;
    printNum();
    cout << myNum << endl;
    cout << ::myNum << endl; // scope resolution operator uses the global variable instead of the local variable
    return 0;
}