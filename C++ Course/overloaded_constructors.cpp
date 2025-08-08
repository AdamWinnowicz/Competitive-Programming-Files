#include <bits/stdc++.h>
using namespace std;

class Pizza{
    public:
        string topping1;
        string topping2;
    Pizza(){
    }
    Pizza(string topping1){
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main() {

    // overloaded constructors = multiple constructors w\ same name but different parameters
    // allows for varying arguments when instantiating an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms","peppers");
    Pizza pizza3;

    cout << pizza1.topping1 << '\n';
    cout << '\n';
    cout << pizza2.topping1 << '\n';
    cout << pizza2.topping2 << '\n';

    return 0;
}