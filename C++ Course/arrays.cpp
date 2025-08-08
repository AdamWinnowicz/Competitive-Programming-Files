#include <bits/stdc++.h>
using namespace std;

int main() {

    // array = a data structure that can hold multiple values of the same data type
    // values are accesseed by an index number
    // "kind of like a variable that holds multiple values"

    string cars[3]; // array of strings with 3 elements, initialized to empty strings
    cars[0] = "Camaro";
    cars[0] = "Mustang";
    cars[0] = "Camry";
    
    double prices[] = {5.00, 7.50, 9.99, 15.00}; // array is defined with its fixed size and starting values
    cout << prices[0] << '\n';
    cout << prices[1] << '\n';
    cout << prices[2] << '\n';
    cout << prices[3] << '\n';

    return 0;
}