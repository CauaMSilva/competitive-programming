#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << " = " << x << endl;
#define ll long long
#define f first
#define s second

void solve() {
    int a, b, c, h, l; cin >> a >> b >> c >> h >> l;
    vector<int> v = {a, b, c};
    vector<int> s = {h, l};

    sort(v.begin(), v.end());
    sort(s.begin(), s.end());

    if (v[0] < s[0] && v[1] < s[1]) {
        cout << "S\n";
    } else {
        cout << "N\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}