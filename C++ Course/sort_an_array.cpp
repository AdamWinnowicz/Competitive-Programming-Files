#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int array[], int size){

    int temp;
    for (int i = 0; i < size-1; i++){
        // larger elements should already be in place, so we dont need to compare with them. This is why we only iterate until size - i - 1.
        for (int j = 0; j < size - i - 1; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
int main() {
    // bubble sort algorithm
    int array[] = {10,1,9,2,8,3,7,4,6,5};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);
    
    for (int element : array) {
        cout << element << " ";
    }
    return 0;
}