#include "bits/stdc++.h"
using namespace std;

int main() {
    // type conversion = conversion of a value of one data type to another
    // implicit = automatic
    // explicit = precede value with new data type (int)
    int x = 3.14; 
    cout << x << '\n'; // implicit type conversion (float to int) = 3

    double y = (int) 3.14;
    cout << y << '\n'; // explicit type conversion (int to float) = 3.0

    char z = 100;
    cout << z << '\n'; // implicit type conversion (int to char) = d
    
    cout << (char) 100 << '\n'; // explicit type conversion (int to char) = d

    int correct = 8;
    int questions = 10;
    // double score = correct/questions * 100; // this will give 0.0 because both correct and questions are integers, so the integer division will truncate 0.8 to 0
    double score = (double) correct/questions * 100; // this will give 80.0 because correct is cast to a double, so the division will be done in double precision
}