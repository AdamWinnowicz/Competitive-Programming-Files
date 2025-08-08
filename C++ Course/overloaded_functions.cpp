#include <bits/stdc++.h>
using namespace std;

void bakePizza() {
    cout << "Here is your pizza!\n";
}

void bakePizza(string topping1) {
    cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(string topping1, string topping2) {
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}
int main() {
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "peppers");
    // function name with its parameters is known as its function signature, and they have to be unique between all functions
    // however, if the parameters or the function name are the same but the other is different, this is called fucntion overloading
    return 0;
}