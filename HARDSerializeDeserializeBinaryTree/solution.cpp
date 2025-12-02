#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
    void ser(TreeNode* node, string& out) {
        if (!node) {
            out += "# ";
            return;
        }
        out += to_string(node->val) + " ";
        ser(node->left, out);
        ser(node->right, out);
    }

    TreeNode* build(istringstream& in) {
        string token;
        if (!(in >> token)) return nullptr;
        if (token == "#") return nullptr;
        TreeNode* node = new TreeNode(stoi(token));
        node->left = build(in);
        node->right = build(in);
        return node;
    }

public:
    string serialize(TreeNode* root) {
        string out;
        ser(root, out);
        return out;
    }

    TreeNode* deserialize(string data) {
        istringstream in(data);
        return build(in);
    }
};

int main() { return 0; }

