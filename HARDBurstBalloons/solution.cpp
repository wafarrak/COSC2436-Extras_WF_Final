#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& nums) {
        vector<int> a;
        a.reserve(nums.size() + 2);
        a.push_back(1);
        for (int x : nums) if (x != 0) a.push_back(x);
        a.push_back(1);
        int n = (int)a.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int len = 2; len < n; ++len) {
            for (int left = 0; left + len < n; ++left) {
                int right = left + len;
                int best = 0;
                for (int k = left + 1; k < right; ++k) {
                    int val = dp[left][k] + dp[k][right] + a[left] * a[k] * a[right];
                    if (val > best) best = val;
                }
                dp[left][right] = best;
            }
        }
        return dp[0][n - 1];
    }
};

int main() { return 0; }

