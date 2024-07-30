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
    // Main function to find the lowest common ancestor (LCA)
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Start from the root of the BST
        TreeNode* current = root;

        // Loop until we find the LCA
        while (current != nullptr) {
            // If both p and q are greater than current, LCA is in the right subtree
            if (p->val > current->val && q->val > current->val) {
                current = current->right;
            }
            // If both p and q are less than current, LCA is in the left subtree
            else if (p->val < current->val && q->val < current->val) {
                current = current->left;
            }
            // If p and q are on opposite sides or one of them is equal to current, current is the LCA
            else {
                return current;
            }
        }

        return nullptr; // This line should never be reached if the input is valid
    }
};
