#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    vector<int> n;
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < s.size(); i += 2){
            if (s[i] == '1' && j == 0){
                n.push_back(s[i] - '0');
                continue;
            }
            if (s[i] == '2' && j == 1){
                n.push_back(s[i] - '0');
                continue;
            }
            if (s[i] == '3' && j == 2){
                n.push_back(s[i] - '0');
                continue;
            }
        }
    }
    for (int i = 0; i < n.size(); i++) {
        if (i == n.size()-1) {
            cout << n[i] << endl;
            return;
        }
        cout << n[i] << '+';
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}