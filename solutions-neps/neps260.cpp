#include <bits/stdc++.h>
using namespace std;

#define dbg(x) cout << #x << " = " << x;
#define ll long long
#define f first
#define s second

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;

    if (a*b == c*d)
        cout << '0' << "\n";
    
    if (a*b > c*d)
        cout << "-1" << "\n";
    else if(a*b < c*d)
        cout << '1' << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}