#include "bits/stdc++.h"
using namespace std;

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
    string name;
    int age;
    cout << "What is your age?: " << '\n';
    cin >> age;
    cout << "You are " << age << " years old." << '\n';

    cout << "What is your full name?: " << '\n';
    getline(cin >> ws, name);
    // ws is used to ignore leading whitespace characters
    // getline(cin, name) will not work because cin >> ws is needed to ignore the newline character left in the input buffer after reading age
    cout << "Hello " << name << '\n';
    return 0;
}