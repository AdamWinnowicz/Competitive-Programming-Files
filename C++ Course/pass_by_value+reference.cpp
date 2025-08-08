#include <bits/stdc++.h>
using namespace std;

void swap(string &x, string &y){
    // passing by values --> copy of the original values
    // therefore, x and y are not changed, only their copies are changed

    // instead, we can pass by reference by giving the specific memory addresses to the function (use &)
    string temp;
    temp = x;
    x = y;
    y = temp;

}
int main() {

    string x = "Kool-Aid";
    string y = "Water";
    
    swap(x,y);

    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}