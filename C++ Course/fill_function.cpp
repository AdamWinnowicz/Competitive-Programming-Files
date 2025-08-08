#include <bits/stdc++.h>
using namespace std;

int main() {

    // fill() = Fills a range of elements with a specified value
    // fill(begin, end, value)
    const int SIZE = 99;
    string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (2*SIZE/3), "hamburgers");
    fill(foods + (2*SIZE/3), foods + SIZE, "hotdogs");

    for (string food : foods) {
        cout << food << " ";
    }

    return 0;
}