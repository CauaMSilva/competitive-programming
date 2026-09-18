#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> m;

        for (char c : s) m[c]++;

        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) return i;
        }
        
        return -1;
    };
};