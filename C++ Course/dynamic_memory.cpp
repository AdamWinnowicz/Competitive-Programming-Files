#include <bits/stdc++.h>
using namespace std;

int main() {

    // dynamic memory = memory that is allocated after the program is already compiled and running.
    // Use the "new" operator to allocate memory in the heap rather than the stack
    
    // Useful when we don't know how much memory we will need. 
    // Makes our programs more flexible, especially when accepting user input.

    // int *pNum = nullptr; // creates a pointer that can later point to an int, but currently points to nothing

    // pNum = new int;

    // *pNum = 21;

    // cout << "address: " << pNum << '\n';
    // cout << "value: " << *pNum << '\n';

    // delete pNum;

    char *pGrades = nullptr;
    int size;
    cout << "How many grades to enter in?: \n";
    cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;


    return 0;
}