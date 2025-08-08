#include "bits/stdc++.h"
using namespace std;

int main() {
    double x = 3.99;
    double y = 4;
    double z;
    z = max(x, y);
    z = min(x, y);
    z = pow(x,y); // 2**4 = 16
    z = sqrt(4); // 4**(1/2) = 2
    z = abs(-3); // 3
    z = round(x); // 3.0
    z = ceil(x); // 4.0
    z = floor(x); // 3.0
    cout << "The floor of x is " << z << '\n';
    return 0;
}