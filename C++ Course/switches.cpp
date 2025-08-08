#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // switch = alternative to using many "else if" statements 
    // compare one value aggainst matching cases

    int month;
    cout << "Enter the month number (1-12): ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "It is January" << '\n';
            break;
        case 2:
            cout << "It is February" << '\n';
            break;
        case 3:
            cout << "It is March" << '\n';
            break;
        case 4:
            cout << "It is April" << '\n';
            break;
        case 5:
            cout << "It is May" << '\n';
            break;
        case 6:
            cout << "It is June" << '\n';
            break;
        case 7:
            cout << "It is July" << '\n';
            break;
        case 8:
            cout << "It is August" << '\n';
            break;
        case 9:
            cout << "It is September" << '\n';
            break;
        case 10:
            cout << "It is October" << '\n';
            break;
        case 11:
            cout << "It is November" << '\n';
            break;
        case 12:
            cout << "It is December" << '\n';
            break;
        default:
            cout << "Invalid month number!" << '\n';
    }
    // inefficient way to do the same thing as above using "else if" statements
    // if (month == 1) {
    //     cout << "It is January" << '\n';
    // }
    // else if (month == 2) {
    //     cout << "It is February" << '\n';
    // }
    // else if (month == 3) {
    //     cout << "It is March" << '\n';
    // }
    // else if (month == 4) {
    //     cout << "It is April" << '\n';
    // }
    // else if (month == 5) {
    //     cout << "It is May" << '\n';
    // }
    // else if (month == 6) {
    //     cout << "It is June" << '\n';
    // }
    // else if (month == 7) {
    //     cout << "It is July" << '\n';
    // }
    // else if (month == 8) {
    //     cout << "It is August" << '\n';
    // }
    // else if (month == 9) {
    //     cout << "It is September" << '\n';
    // }
    // else if (month == 10) {
    //     cout << "It is October" << '\n';
    // }
    // else if (month == 11) {
    //     cout << "It is November" << '\n';
    // }
    // else if (month == 12) {
    //     cout << "It is December" << '\n';
    // }
    // else {
    //     cout << "Invalid month number!" << '\n';
    // }

    return 0;
}