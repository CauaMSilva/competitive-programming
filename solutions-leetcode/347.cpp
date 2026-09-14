#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<int> s;
        vector<int> ans;
        unordered_map<int, int> m;
        
        for (int n : nums) {
            m[n]++;
            s.insert(n);
        }

        while (k--) {
            int max = 0;
            int maxfreq = 0;
            for (int n : s) {
                if (m[n] > maxfreq) {
                    max = n;
                    maxfreq = m[n];
                }
            }
            ans.push_back(max);
            s.erase(max);
            m.erase(max);
        }
        return ans;
    };
};