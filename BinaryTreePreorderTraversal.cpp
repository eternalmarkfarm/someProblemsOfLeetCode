#include<vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void preorder(TreeNode* root, std::vector<int>& trave) {
    if (root != nullptr) {
        trave.push_back(root->val);
    }
    if(root!=nullptr)
    {
        preorder(root->left, trave);
        preorder(root->right, trave);
    }
}

std::vector<int> preorderTraversal(TreeNode* root) {
    std::vector<int> trave;
    preorder(root, trave);
    return trave;
}