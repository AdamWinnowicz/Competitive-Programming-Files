#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k, p; cin >> n >> k >> p;
        if(abs(k) > n * p) cout << -1 << '\n';
        else cout << (abs(k) % p == 0 ? abs(k) / p : abs(k) / p + 1) << '\n';
    }

    return 0;
}