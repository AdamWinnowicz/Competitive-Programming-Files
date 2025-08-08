#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // if statements = do something if a condition is true.
    // if not, then don't do anything.
    int age;
    cout << "Enter your age: " << '\n';
    cin >> age;
    if (age >= 100) {
        cout << "You are too old to enter this site!" << '\n';
    }
    else if (age >= 18) {
        cout << "Welcome to the site!" << '\n';
    }
    else if (age < 0) {
        cout << "You haven't been born yet!" << '\n';
    }
    else {
        cout << "You are not old enough to enter!" << '\n';
    }
    return 0;
}