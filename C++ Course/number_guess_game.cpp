#include <bits/stdc++.h>
using namespace std;

int main() {

    int num, guess;
    int tries = 0;
    srand(time(0));
    num = rand() % 100 + 1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    do {
        cout << "Enter a guess from 1 to 100: ";
        cin >> guess;
        tries++;
        if (guess > num) {
            cout << "too high!" << endl;
        }
        else if (guess < num) {
            cout << "too low!" << endl;
        }
        else {
            cout << "Correct! You guessed the number in " << tries << " tries." << endl;
        }
    } while (guess != num);
    return 0;
}