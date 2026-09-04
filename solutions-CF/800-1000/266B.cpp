#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    string s; cin >> s;
    bool sb = false;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < n-1; j++) {
                if (s[j] == 'B' && s[j + 1] == 'G') {
                s[j] = 'G';
                s[j+1] = 'B';
                sb = true;
                ++j;
            }
        }
    }
    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}