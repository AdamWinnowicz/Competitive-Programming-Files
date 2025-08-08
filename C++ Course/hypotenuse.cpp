#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << "Enter the lengths of the two legs of the right triangle: " << '\n';
    double a, b, c;
    cin >> a >> b;
    c = sqrt(a * a + b * b);
    cout << "The length of the hypotenuse is: " << c << '\n';

    return 0;
}