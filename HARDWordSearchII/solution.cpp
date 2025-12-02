#include <bits/stdc++.h>
using namespace std;

struct TrieNode {
    TrieNode* next[26];
    string word;
    TrieNode() : word("") {
        memset(next, 0, sizeof(next));
    }
};

class Solution {
    TrieNode* buildTrie(const vector<string>& words) {
        TrieNode* root = new TrieNode();
        for (auto& w : words) {
            TrieNode* cur = root;
            for (char c : w) {
                int idx = c - 'a';
                if (!cur->next[idx]) cur->next[idx] = new TrieNode();
                cur = cur->next[idx];
            }
            cur->word = w;
        }
        return root;
    }

    void dfs(vector<vector<char>>& board, int i, int j, TrieNode* node, vector<string>& res) {
        char c = board[i][j];
        int idx = c - 'a';
        TrieNode* nxt = node->next[idx];
        if (!nxt) return;
        if (!nxt->word.empty()) {
            res.push_back(nxt->word);
            nxt->word.clear();
        }
        board[i][j] = '#';
        int m = board.size(), n = board[0].size();
        if (i > 0 && board[i - 1][j] != '#') dfs(board, i - 1, j, nxt, res);
        if (j > 0 && board[i][j - 1] != '#') dfs(board, i, j - 1, nxt, res);
        if (i + 1 < m && board[i + 1][j] != '#') dfs(board, i + 1, j, nxt, res);
        if (j + 1 < n && board[i][j + 1] != '#') dfs(board, i, j + 1, nxt, res);
        board[i][j] = c;
    }

public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root = buildTrie(words);
        int m = board.size(), n = board[0].size();
        vector<string> res;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                dfs(board, i, j, root, res);
        return res;
    }
};

int main() { return 0; }

