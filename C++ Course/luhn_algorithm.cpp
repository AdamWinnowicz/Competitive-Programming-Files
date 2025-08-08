#include <bits/stdc++.h>
using namespace std;

// credit card validator program

// Luhn Algorithm:
// 1. Double every second digit from right to left, and if double number is two digits, split them
// 2. Add all single digits from step 1
// 3. Add all odd numbered digits from right to left
// 4. Sum results from steps 2 and 3
// 5. If step 4 is divisible by 10, the number is valid

// 6011    0009    9013    9424
// 6 1     0 0     9 1     9 2 
// 12 2     0 0     18 2     18 4 
// 1 2 2     0 0      1 8 2     1 8 4 ------> sum = 29

// 6011    0009    9013    9424
//  0 1     0 9     0 3     4 4 -------> sum = 21

// 29 + 21 = 50

// 50 % 10 == 0 CORRECT

int getDigit(const int number){
    return (number % 10) + (number / 10 % 10);

}
int sumOddDigits(const string cardNumber){
    int total = 0;
    for(int i = cardNumber.size()-1; i >= 0; i-=2) {
        total += cardNumber[i] - '0';
    }
    return total;
}
int sumEvenDigits(const string cardNumber){
    int total = 0;
    for(int i = cardNumber.size()-2; i >= 0; i-=2) {
        total += getDigit((cardNumber[i] - '0') * 2);
    }
    return total;
}

int main() {
    
    string cardNumber;
    int result;

    cout << "Enter a credit card number: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if (result % 10 == 0) {
        cout << "This is a valid credit card number!\n";
    }
    else {
        cout << "This is not a valid credit card number.\n";
    }

    return 0;
}