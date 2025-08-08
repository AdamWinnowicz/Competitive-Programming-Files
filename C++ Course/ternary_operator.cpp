#include <bits/stdc++.h>
using namespace std;

int main() {
    // ternary operator ?: = replacement for an if/else statement
    // condition ? expression1 : expression2;

    // int grade = 50;
    // (grade >= 60) ? cout << "You pass!" << '\n' : cout << "You fail!" << '\n';

    // int number = 12;
    // number % 2 == 0 ? cout << "Even" << '\n' : cout << "Odd" << '\n';

    bool hungry = false;
    // hungry ? cout << "You are hungry!" << '\n' : cout << "You are full!" << '\n';
    cout << (hungry ? "You are hungry!" : "You are full!") << '\n';

    int wealth = 100000000;
    cout << (wealth > 100000 ? "You are rich!" : "You are poor!") << '\n';
    return 0;

    
}