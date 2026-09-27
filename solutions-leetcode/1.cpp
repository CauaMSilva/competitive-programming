#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> m;
        pair<int, int> p(0, 0);

        for (int i = 0; i < nums.size(); i++) {
            p.f = nums[i]; p.s = i;
            m.push_back(p);
        }
        sort(m.begin(), m.end());
        int x = 0, p1 = 0, p2 = nums.size()-1;
        while (true) {
            x = m[p1].f + m[p2].f;
            if (x == target) {
                return {m[p1].s, m[p2].s};
            }
            if (x < target) {
                p1++;
                continue;
            }
            if (x > target) {
                p2--;
                continue;
            }
        }
    }
};