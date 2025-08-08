#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    // like an if statement, but it will keep looping until the condition is false
    while (name.empty()) {
        cout << "Enter your name: ";
        getline(cin, name);
    }
    cout << "Helllo, " << name << '\n';

    // infinite loop
    // while (true) {
    //     cout << "HELP! I am stuck in an infinite loop!" << endl;
    // }
    // return 0;
}