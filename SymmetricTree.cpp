#include <string>
#include <vector>
#include <stack>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};



bool isSymmetric(TreeNode* root) {
    std::vector<std::string> left{ std::to_string(root->val) };
    std::vector<std::string> right{ std::to_string(root->val) };

    std::stack<TreeNode*> stack;
    stack.push(root->left);

    while (!stack.empty()) {
        TreeNode* current = stack.top();
        stack.pop();

        if (current == nullptr) {
            left.push_back("null");
        }
        else {
            left.push_back(std::to_string(current->val));
            stack.push(current->right);
            stack.push(current->left);
        }
    }

    stack.push(root->right);

    while (!stack.empty()) {
        TreeNode* current = stack.top();
        stack.pop();

        if (current == nullptr) {
            right.push_back("null");
        }
        else {
            right.push_back(std::to_string(current->val));
            stack.push(current->left);
            stack.push(current->right);
        }
    }


    return left == right;

}


