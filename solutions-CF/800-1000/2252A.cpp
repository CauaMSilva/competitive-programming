#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> freq(1001, 0);

    int sum = 0;
    int maxFreq = 0;
    int maxValue = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        sum += a[i];

        freq[a[i]]++;

        if (freq[a[i]] > maxFreq) {
            maxFreq = freq[a[i]];
            maxValue = a[i];
        }
    }

    int other = n - maxFreq;

    if (maxFreq <= other + 1) {
        cout << sum << '\n';
    } else {
        int answer = sum - maxFreq * maxValue;
        answer += (other + 2) * maxValue;

        cout << answer << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}