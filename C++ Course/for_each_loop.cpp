#include <bits/stdc++.h>
using namespace std;

int main() {

    // foreach loop = eases the traversal over an iterable data set

    // string students[] = {"John", "Jane", "Jim", "Jack"};
    // for(string student : students) {
    //     cout << student << '\n';
    // }

    // int grades[] = {65, 72, 81, 93};
    // for(int grade : grades) {
    //     cout << grade << '\n';
    // }

    int array[] = {1,2,3,4,5,6,7};
    int total = 0;
    for (int val : array) {
        total += val;
    }
    cout << total << '\n';

    return 0;
}