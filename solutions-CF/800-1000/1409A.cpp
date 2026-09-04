#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << " = " << x;
#define ll long long
#define f first
#define s second

void solve() {
    int a, b; cin >> a >> b;

    if (abs(a-b) % 10 > 0) {
        cout << (abs(a-b) / 10) + 1 << "\n";
        return;
    }
    cout << abs(a-b) / 10 << "\n";
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