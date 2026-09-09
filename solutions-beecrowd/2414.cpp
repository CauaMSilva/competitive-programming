#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x = 0;

    while(true) {
        cin >> n;
        if (n == 0)
            break;

        if (n > x)
            x = n;
    }
    cout << x;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    solve();
    return 0;
}