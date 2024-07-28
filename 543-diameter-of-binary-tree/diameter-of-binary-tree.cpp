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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;  // Initialize diameter
        height(root, diameter);  // Compute height and update diameter
        return diameter;  // Return the final diameter
    }

    // Helper function to compute the height of the tree and update the diameter
    int height(TreeNode* node, int& diameter) {
        if (node == nullptr) {  // Base case: if the node is null
            return 0;  // The height of a null node is 0
        }

        // Recursively compute the height of the left and right subtrees
        int leftHeight = height(node->left, diameter);
        int rightHeight = height(node->right, diameter);

        // Update the diameter if the path through this node is larger than the current diameter
        diameter =max(diameter, leftHeight + rightHeight);

        // Return the height of the tree rooted at this node
        return 1 + max(leftHeight, rightHeight);
    }
};
