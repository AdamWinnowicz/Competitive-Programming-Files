#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        int total = a+b+c;
        if(total >= 2){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}