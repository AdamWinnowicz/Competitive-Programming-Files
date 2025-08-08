#include <bits/stdc++.h>
using namespace std;

double getTotal(double prices[], int size){
    double total = 0;
    // pointer is passed to the function, so it does not know how large the array is
    for(int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}
double getMean(double prices[], int size) {
    double total = 0;
    for(int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total / size;
}
int main() {

    double prices[] = {49.99, 15.05, 75.00, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    double mean = getMean(prices, size);
    cout << "$" << total << '\n';
    cout << "$" << mean << '\n';
    
    return 0;
}