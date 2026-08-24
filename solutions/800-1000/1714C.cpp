#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s;

    while (n > 0) {
        for (int i = 9; i > 0; i--) {
            if (n - i > -1) {
                n = n - i;
                s.push_back(i + '0');
            }
        }
    }
    reverse(s.begin(), s.end());
    n = stoi(s);
    cout << n << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}