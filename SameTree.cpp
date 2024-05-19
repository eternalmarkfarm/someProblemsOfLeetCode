#include <vector>
#include <stack>
#include <string>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};


bool isSameTree(TreeNode* p, TreeNode* q) {
    std::vector<std::string> one;
    std::vector<std::string> two;

    traverse(p, one);
    traverse(q, two);

    return one == two;
}


    void traverse(TreeNode* node, std::vector<std::string>& result) {
        std::stack<TreeNode*> stack;
        stack.push(node);

        while (!stack.empty()) {
            TreeNode* current = stack.top();
            stack.pop();

            if (current == nullptr) {
                result.push_back("null");
            }
            else {
                result.push_back(std::to_string(current->val));
                stack.push(current->right);
                stack.push(current->left);
            }
        }
    }