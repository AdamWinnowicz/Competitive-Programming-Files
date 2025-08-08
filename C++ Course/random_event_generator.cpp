#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    srand(time(0));
    int randnum = rand() % 5 + 1;

    switch(randnum){
        case 1: cout << "You win a bumper sticker!\n"; break;
        case 2: cout << "You win a t-shirt!\n"; break;
        case 3: cout << "You win a free lunch!\n"; break;
        case 4: cout << "You win a gift card!\n"; break;
        case 5: cout << "You win concert tickets!\n"; break;
    }

    return 0;
}