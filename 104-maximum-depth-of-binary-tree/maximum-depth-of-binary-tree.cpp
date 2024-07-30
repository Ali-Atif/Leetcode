/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Main function to calculate the maximum depth of the binary tree
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;  // Base case: if the tree is empty, the depth is 0
        }

        // Recursively calculate the depth of the left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        // The maximum depth is the greater of the two subtree depths, plus one for the current node
        return std::max(leftDepth, rightDepth) + 1;
    }
};
