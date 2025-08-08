#include <bits/stdc++.h>
using namespace std;

int main() {

    char op;
    double num1, num2, result;
    cout << "************** CALCULATOR **************" << '\n';

    cout << "Enter either (+,-,*,/): ";
    cin >> op;

    cout << "Enter #1; ";
    cin >> num1;
    cout << "Enter #2; ";
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "result: " << result << '\n';
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "result: " << result << '\n';
            } else {
                cout << "Error: Division by zero!" << '\n';
            }
            break;
        default:
            cout << "Error: Invalid operator!" << '\n';
            break;
    }


    cout << "****************************************" << '\n';
    return 0;
}