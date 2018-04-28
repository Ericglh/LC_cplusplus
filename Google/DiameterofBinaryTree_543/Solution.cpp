//
// Created by Lianghao Gao on 4/27/18.
//

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxLen;

int calculate(TreeNode* node) {
    int left = 1, right = 1;
    if (node->left != nullptr) {
        left = max(left, calculate(node->left));
    }

    if (node->right != nullptr) {
        right = max(right, calculate(node->right));
    }

    maxLen = max(maxLen, max(left, right) + 1);
}

int diameterOfBinaryTree(TreeNode* root) {
    maxLen = 0;
    calculate();
    return maxLen;
}
