#include <bits/stdc++.h>
using namespace std;

class Solution {
    pair<int,int> expand(const string& s, int l, int r) {
        while (l >= 0 && r < (int)s.size() && s[l] == s[r]) {
            --l;
            ++r;
        }
        return {l + 1, r - 1};
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int bestL = 0, bestR = 0;
        for (int i = 0; i < n; ++i) {
            auto p1 = expand(s, i, i);
            if (p1.second - p1.first > bestR - bestL) {
                bestL = p1.first;
                bestR = p1.second;
            }
            auto p2 = expand(s, i, i + 1);
            if (p2.second - p2.first > bestR - bestL) {
                bestL = p2.first;
                bestR = p2.second;
            }
        }
        return s.substr(bestL, bestR - bestL + 1);
    }
};

int main() { return 0; }

