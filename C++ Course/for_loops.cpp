#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    for (int i = 10; i >= 0; i-=2) {
        cout << i << '\n';
    }
    cout << "Happy New Year!" << '\n';

    // break = break out of a loop
    // continue = skip the current iteration of a loop
    for (int i = 0; i <= 20; i++) {
        if (i == 13) {
            break;
        }
        cout << i << '\n';
    }
    return 0;
}