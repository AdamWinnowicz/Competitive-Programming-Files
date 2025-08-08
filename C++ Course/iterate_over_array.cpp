#include <bits/stdc++.h>
using namespace std;

int main() {

    string students[] = {"John", "Jane", "Jim", "Jack"};
    // display all elements by using the index
    // cout << students[0] << '\n';
    // cout << students[1] << '\n';
    // cout << students[2] << '\n';
    // cout << students[3] << '\n';

    // better approach: use a for loop!
    for (int i = 0; i < sizeof(students)/sizeof(string); i++) {
        cout << students[i] << '\n';
    }

    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    for (int i = 0; i < sizeof(grades)/sizeof(char); i++) {
        cout << grades[i] << '\n';
    }


    return 0;
}