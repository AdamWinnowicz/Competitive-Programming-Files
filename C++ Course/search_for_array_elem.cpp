#include <bits/stdc++.h>
using namespace std;

template <typename T>
int searchArray(T array[], int size, T element);

template <typename T>
void showLocation(T array[], int size, T element);

int main() {

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    string foods[] = {"apple", "pizza", "hamburger", "hotdog"};
    int numbersSize = sizeof(numbers)/sizeof(numbers[0]);
    int foodsSize = sizeof(foods)/sizeof(foods[0]);
    int myNum;
    string myFood;

    cout << "Enter number to search for: " << '\n';
    cin >> myNum;
    showLocation(numbers,numbersSize,myNum);

    cout << "Enter food to search for: " << '\n';
    getline(cin >> ws,myFood);
    showLocation(foods,foodsSize,myFood);

    

    return 0;
}

template <typename T>
int searchArray(T array[], int size, T element) {

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}

template <typename T>
void showLocation(T array[], int size, T element) {

    int index = searchArray(array,size,element);

    if (index != -1) {
        cout << element << " is at index " << index << '\n';
    }
    else {
        cout << element << " is not in the array\n";
    }
}