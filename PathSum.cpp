struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


bool hasPathSum(TreeNode* root, int targetSum)
{
    if (root == nullptr)
        return false;
    if (root->left == nullptr && root->right == nullptr)
        return (targetSum - root->val == 0);
    else
    {
        bool left = false, right = false;
        if (root->left != nullptr)
            left = hasPathSum(root->left, targetSum - root->val);
        if (root->right != nullptr)
            right = hasPathSum(root->right, targetSum - root->val);
        return left || right;
    }
}