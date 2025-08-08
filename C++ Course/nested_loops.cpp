#include <bits/stdc++.h>
using namespace std;

int main() {

    // for (int i = 1; i <= 3; i++) {
    //     for (int j = 1; j <= 10; j++) {
    //         cout << j << " ";
    //     }
    //     cout << '\n';
    // }

    // print a rectangle made out of symbols
    int rows, cols;
    char symbol;

    cout << "How many rows? " << endl;
    cin >> rows;
    cout << "How many columns? " << endl;
    cin >> cols;
    cout << "Enter a symbol to use: " << endl;
    cin >> symbol;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << symbol << " ";
        }
        cout << '\n';
    }
    return 0;
}