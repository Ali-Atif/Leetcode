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
    // Main function to calculate the minimum depth of the binary tree
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;  // Base case: if the tree is empty, the depth is 0
        }

        // If the left subtree is null, recursively calculate the depth of the right subtree
        if (root->left == nullptr) {
            return minDepth(root->right) + 1;
        }

        // If the right subtree is null, recursively calculate the depth of the left subtree
        if (root->right == nullptr) {
            return minDepth(root->left) + 1;
        }

        // If both left and right subtrees are not null, calculate the minimum depth of both subtrees and add 1 for the current node
        return std::min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};
