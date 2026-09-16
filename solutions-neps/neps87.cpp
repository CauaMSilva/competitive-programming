#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << " = " << x;
#define ll long long
#define f first
#define s second

void solve() {
    int p, r; cin >> p >> r;

    if (p == 0) {
        cout << "C" << "\n";
        return;
    }
    if (r == 0)
        cout << "B" << "\n";
    else
        cout << "A" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}