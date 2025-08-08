#include <bits/stdc++.h>
using namespace std;

// class Student{
//     public:
//         string name;
//         int age;
//         double gpa;
    
//         Student(string x, int y, double z){
//             name = x;
//             age = y;
//             gpa = z;
//         }
// };

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

    Car(string make, string model, int year, string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};


int main() {

    //constructor = special method that is automatically called when an object is instantiated
    //useful for assigning values to attributes as arguments

    // Student student1("Adam",17,4.0);
    // Student student2("Haris",16,4.0);
    // Student student3("Josh",17,1.0);

    // cout << student3.name << '\n';
    // cout << student3.age << '\n';
    // cout << student3.gpa << '\n';

    Car car1("Chevy", "Corvette", 2020, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    cout << car2.make << '\n';
    cout << car2.model << '\n';
    cout << car2.year << '\n';
    cout << car2.color << '\n';

    return 0;
}