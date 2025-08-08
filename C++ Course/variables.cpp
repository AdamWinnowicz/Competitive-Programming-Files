#include "bits/stdc++.h"
using namespace std;

int main() {
    
    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; // 7.5 will be truncated to 7

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represent a sequence of text)
    string name = "Bro";
    string day = "Friday";
    string food = "Pizza";

    cout << "Hello" << '\n';
    cout << "You are " << age << " years old." << '\n';

    // const keyword is used to declare a constant variable
    const double pi = 3.14;
    const int light_speed = 299792458;
    const int width = 1920;
    const int height = 1080;
    double radius = 10;
    double circumference = 2 * pi * radius;
    cout << circumference << "cm" << '\n';

    return 0;
}

