#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case(){
    string s; cin >> s;
    string one, two;
    for(int i = 0; i < 10; i++){
        if(s[i] == '?' && i % 2 == 0){
            one += '1'; two += '0';
        }
        else if(s[i] == '?' && i % 2 == 1){
            one += '0'; two += '1';
        }
        else{
            one += s[i]; two += s[i];
        }
    }
    int ans = 10;
    int team_two_kicks = 5, t1_score = 0, t2_score = 0;
    for(int i = 0; i < 10; i++){
        if(one[i] == '1'){
            if(i % 2 == 0) t1_score++;
            else t2_score++;
        }
        if(i % 2 == 1) team_two_kicks--;
        if(t1_score > t2_score + team_two_kicks){
            ans = min(ans, i+1); break;
        }
    }
    int team_one_kicks = 5;
    t1_score = 0; t2_score = 0;
    for(int i = 0; i < 10; i++){
        //cout << t1_score << " " << t2_score << " " << team_one_kicks << '\n';
        if(two[i] == '1'){
            if(i % 2 == 0) t1_score++;
            else t2_score++;
        }
        if(i % 2 == 0) team_one_kicks--;
        if(t2_score > t1_score + team_one_kicks){
            ans = min(ans, i+1); break;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        test_case();
        //cout << (test_case() ? "Yes\n" : "No\n");
    }

    return 0;
}