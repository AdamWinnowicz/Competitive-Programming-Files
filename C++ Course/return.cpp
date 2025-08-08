#include <bits/stdc++.h>
using namespace std;

double square(double length) {
    double result = length * length; // calculate the area of a square
    return result;
}
double cube(double length) {
    double result = length * length * length; // calculate the area of a cube
    return result;
}
string concatenate(string string1, string string2) {
    return string1 + " " + string2;
}
int main() {

    // return = return a value back to the spot where you called the encompassing function
    // function to calculate the area of a square
    // double length = 5.0;
    // double area = square(length);
    // double volume = cube(length);
    // cout << "The area of the square is: " << area << "cm^2\n";
    // cout << "The volume of the cube is: " << volume << "cm^3\n";

    string firstName = "Adam";
    string lastName = "Winnowicz";
    string fullName = concatenate(firstName, lastName);
    cout << "Your full name is: " << fullName << '\n';



    return 0;
}