#include <bits/stdc++.h>
using namespace std;

enum Day {sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6}; // explicit assignment
enum Flavor {vanilla,chocolate,strawberry,mint}; // implicit assignment to 0, 1, 2, 3, etc.

int main() {

    // enums = a user-defined data type that consist of paired named-integer constants.
    // great if you have a set of potential options
    // emums -----> enumerations

    Day today = monday;

    switch(today){
        case sunday:
            cout << "It is sunday!\n";
            break;
        case saturday:
            cout << "It is saturday!\n";
            break;
        case monday:
            cout << "It is monday!\n";
            break;
        case tuesday:
            cout << "It is tuesday!\n";
            break;
         case wednesday:
            cout << "It is wednesday!\n";
            break;
        case thursday:
            cout << "It is thursday!\n";
            break;
        case friday:
            cout << "It is friday!\n";
            break;
    }

    return 0;
}