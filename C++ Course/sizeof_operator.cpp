#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // sizeof() = determines the size in bytes of a: variable, data type, class, object, etc.
    std::string name = "Adam Winnowicz is awesome!";
    cout << sizeof(name) << " bytes\n";
    double gpa = 2.5;
    cout << sizeof(gpa) << " bytes\n"; // (double = 8 bytes)
    char grade = 'F';
    cout << sizeof(grade) << " bytes\n"; // (char = 1 byte)
    bool student = true;
    cout << sizeof(student) << " bytes\n"; // (bool = 1 byte)
    char grades[] = {'A', 'B', 'C', 'D'};
    cout << sizeof(grades) << " bytes\n"; // (char = 1 byte * 4 elements = 4 bytes)
    string students[] = {"Spongebob", "Patrick", "Squidward"};
    cout << sizeof(students) / sizeof(string) << " elements\n";

    return 0;
}