//
// Created by Lianghao Gao on 4/21/18.
//
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int diff = INT_MAX;
pair<int, int> traverse(TreeNode* node) {
    pair<int, int> res(node->val, node->val);
    if (node->left != nullptr) {
        pair<int, int> pair1 = traverse(node->left);
        res.second = min(node->val, pair1.second);
        diff = min(diff, abs(node->val - pair1.first));
    }
    if (node->right != nullptr) {
        pair<int, int> pair2 = traverse(node->right);
        res.first = max(node->val, pair2.first);
        diff = min(diff, abs(node->val - pair2.second));
    }
    return res;
}

//int getMinimumDifference(TreeNode* root) {
//    diff = INT_MAX;
//    pair<int, int> pair3 = traverse(root);
//    return diff;
//}

int getMinimumDifference(TreeNode* root){
    diff = INT_MAX;
    pair<int, int> pair3 = traverse(root);
    return diff;
}

