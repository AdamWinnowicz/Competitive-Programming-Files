#include <bits/stdc++.h>
using namespace std;

void walk(int steps){
    for (int i = 0; i < steps; i++){
        cout << "You take a step\n";
    }
}
void recurseWalk(int steps){
    if (steps > 0){
        cout << "You take a step\n";
        walk(steps-1);
    }
}
int factorial(int num){
    for(int i = num - 1; i > 1;  i--) {
        num *= i;
    }
    return num;
}
int recurseFactorial(int num){
    if (num == 1) {
        return num;
    }
    return num * factorial(num-1);
}
int main() {

    // recursion = a programming technique where a function invokes itself from within
    // break a complex concept into a repeatable single step operation

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    // useful for sorting and searching algorithms

    // disadvantages = uses more memory and slower
    // recursion can lead to stack overflow if too many calls are made too quickly

    // walk(100);
    // cout << "\n";
    // recurseWalk(100);

    cout << factorial(10);
    cout << "\n";
    cout << recurseFactorial(10);

    return 0;
}