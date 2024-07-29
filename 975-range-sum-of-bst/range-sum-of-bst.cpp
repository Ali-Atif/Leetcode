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
    // Main function to calculate the sum of nodes within the range [low, high]
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == nullptr) {
            return 0;  // Base case: if the node is null, return 0
        }

        int sum = 0;
        
        if (root->val >= low && root->val <= high) {
            // If the current node's value is within the range, include it in the sum
            sum += root->val;
        }

        if (root->val > low) {
            // If the current node's value is greater than low, we need to explore the left subtree
            sum += rangeSumBST(root->left, low, high);
        }

        if (root->val < high) {
            // If the current node's value is less than high, we need to explore the right subtree
            sum += rangeSumBST(root->right, low, high);
        }

        return sum;  // Return the accumulated sum
    }
};
