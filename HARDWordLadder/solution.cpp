#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return 0;
        int L = beginWord.size();
        unordered_map<string, vector<string>> patterns;
        patterns.reserve(dict.size() * L + 1);
        auto addPatterns = [&](const string& w) {
            string t = w;
            for (int i = 0; i < L; ++i) {
                char c = t[i];
                t[i] = '*';
                patterns[t].push_back(w);
                t[i] = c;
            }
        };
        for (auto& w : dict) addPatterns(w);
        addPatterns(beginWord);
        queue<pair<string,int>> q;
        unordered_set<string> vis;
        q.push({beginWord, 1});
        vis.insert(beginWord);
        while (!q.empty()) {
            auto [w, d] = q.front();
            q.pop();
            string t = w;
            for (int i = 0; i < L; ++i) {
                char c = t[i];
                t[i] = '*';
                auto it = patterns.find(t);
                if (it != patterns.end()) {
                    for (auto& nxt : it->second) {
                        if (nxt == endWord) return d + 1;
                        if (!vis.count(nxt)) {
                            vis.insert(nxt);
                            q.push({nxt, d + 1});
                        }
                    }
                }
                t[i] = c;
            }
        }
        return 0;
    }
};

int main() { return 0; }

