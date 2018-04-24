//
// Created by Lianghao Gao on 4/23/18.
//

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int diff;

pair<int, int> traverse(TreeNode* node) {
    pair<int, int> resTmp(node->val, node->val);
    if (node->left != nullptr) {
        pair<int, int> resLeft = traverse(node->left);
        resTmp.second = min(node->val, resLeft.second);
        diff = min(diff, node->val - resLeft.first);
    }

    if (node->right != nullptr) {
        pair<int, int> resRight = traverse(node->right);
        resTmp.first = max(node->val, resRight.first);
        diff = min(diff, resRight.second - node->val);
    }
    return resTmp;
}


int minDiffInBST(TreeNode* root) {
    diff = INT_MAX;
    pair<int, int> res = traverse(root);
    return diff;

}