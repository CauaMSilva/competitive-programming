#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; getline(cin, s);
    set<char> c;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ')
            c.insert(s[i]);
    }
    cout << c.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}