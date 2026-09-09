#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl;

class Solution {
public:
    vector<vector<int>> solve(int n) {
        vector<vector<int>> v;
        for (int i = 1; i <= n; i++) {
            vector<int> a(i, 1);
            if (i < 3) {
                v.push_back(a);
                continue;
            }
            for(int j = 1; j < i-1; j++) {
                a[j] = v[i-2][j-1] + v[i-2][j];
            }
            v.push_back(a);
        }
        return v;
    }
    
};
