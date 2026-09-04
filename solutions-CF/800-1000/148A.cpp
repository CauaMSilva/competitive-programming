#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int count = 0;
    vector<int> t(d + 1, 0);
    vector<int> v = {k, l, m, n};

    int j = 0;

    while (j < 4) {
        int i = v[j];

        while (i <= d) {
            t[i]++;
            i += v[j];
        }

        j++;
    }

    for (int i = 1; i <= d; i++) {
        if (t[i] != 0) {
            count++;
        }
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}