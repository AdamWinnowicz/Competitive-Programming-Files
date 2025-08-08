#include <bits/stdc++.h>
using namespace std;

int main() {

    // do while loop = do some block of code first, then repeat again if the condition is true

    // ask a user to enter a positive number
    int number;
    do {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0); // if the number is negative, repeat the loop
    cout << "The number is: " << number << '\n';
    return 0;
}