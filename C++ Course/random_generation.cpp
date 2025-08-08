#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // pseudo-random = NOT truly random (but close)
    // random_device = generates a random number based on the current time
    // mt19937 = Mersenne Twister 19937 (a random number generator)
    // uniform_int_distribution = generates a random number in a given range
    // uniform_real_distribution = generates a random float in a given range
    
    // seed = set the seed for the random number generator (to get different random numbers each time)
    // srand(time(0)); // seed the random number generator with the current time
    // rand() = generates a random number between 0 and RAND_MAX (a constant defined in <cstdlib>)
    srand(time(0));
    // MODULO gives the remainder of a division, which means that if we want to restrict a random number to less than a certain value, we can simply use the modulo operator 
    int num = (rand() % 20) + 1; // random number between 1 and 20 (inclusive)
    int num1 = (rand() % 6) + 1; // random number between 1 and 6 (inclusive)
    int num2 = (rand() % 6) + 1; 
    int num3 = (rand() % 6) + 1;
    
    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3 << '\n';
    return 0;
}