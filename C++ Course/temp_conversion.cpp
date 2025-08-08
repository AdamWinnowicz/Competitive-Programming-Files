#include <bits/stdc++.h>
using namespace std;

int main() {

    double temp;
    char unit;

    cout << "***** Temperature Conversion *****" << '\n';
    cout << "F = Fahrenheit" << '\n';
    cout << "C = Celsius" << '\n';
    cout << "What unit would you like to convert to? (F/C): ";
    cin >> unit;
    if (unit == 'F' || unit == 'f') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        temp = (temp * 9.0 / 5.0) + 32.0;
        cout << "Temperature in Fahrenheit: " << temp << '\n';
    } else if (unit == 'C' || unit == 'c') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        temp = (temp - 32.0) * 5.0 / 9.0;
        cout << "Temperature in Celsius: " << temp << '\n';
    } else {
        cout << "Invalid unit entered." << '\n';
    }
    cout << "**********************************" << '\n';


    return 0;
}