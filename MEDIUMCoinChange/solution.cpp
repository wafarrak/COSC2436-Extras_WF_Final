#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int INF = 1e9;
        vector<int> dp(amount + 1, INF);
        dp[0] = 0;
        for (int c : coins) {
            for (int x = c; x <= amount; ++x) {
                dp[x] = min(dp[x], dp[x - c] + 1);
            }
        }
        return dp[amount] == INF ? -1 : dp[amount];
    }
};

int main() { return 0; }

