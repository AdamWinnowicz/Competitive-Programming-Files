#include <bits/stdc++.h>
using namespace std;

template <typename T, typename U>
auto Max(T x, U y) {
    return (x > y) ? x : y;
}

int main() {

    // template = describes what a function looks like.
    // Can be used to generate as many overloaded functions as needed, each using different data types.
    
    cout << Max(1,2) << '\n';
    cout << Max(1.1,2.2) << '\n';
    cout << Max('1','2') << '\n';
    cout << Max(1,2.1) << '\n';

    return 0;
}