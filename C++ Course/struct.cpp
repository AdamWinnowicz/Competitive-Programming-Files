#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    double gpa;
    bool enrolled = true;
};

int main() {

    // struct = a structure that groups related variables under one name
    // structs can contain many different data types (string, int, double, bool, etc.)
    // this is different from arrays which can only group elements of one data type
    // variables are known as members
    // members can be accessed with . "Class Member Access Operators"

    student student1;
    student1.name = "Adam";
    student1.gpa = 3.8;

    student student2;
    student2.name = "Haris";
    student2.gpa = 4.0;

    student student3;
    student3.name = "Josh";
    student3.gpa = 1.2;

    cout << student1.name << '\n'; 
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';
    cout << '\n';
    cout << student2.name << '\n'; 
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';
    cout << '\n';
    cout << student3.name << '\n'; 
    cout << student3.gpa << '\n';
    cout << student3.enrolled << '\n';

    return 0;
}