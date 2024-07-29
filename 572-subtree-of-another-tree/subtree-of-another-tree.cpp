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
    // Main function to determine if subRoot is a subtree of root
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) {  // If the main tree is empty, it can't contain subRoot
            return false;
        }

        // Check if the current tree rooted at 'root' is identical to 'subRoot'
        if (isSameTree(root, subRoot)) {
            return true;
        }

        // Otherwise, recursively check the left and right subtrees
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

    // Helper function to check if two trees are identical
    bool isSameTree(TreeNode* s, TreeNode* t) {
        if (s == nullptr && t == nullptr) {  // Both trees are empty
            return true;
        }
        if (s == nullptr || t == nullptr) {  // One tree is empty, the other is not
            return false;
        }
        if (s->val != t->val) {  // Values at the current nodes do not match
            return false;
        }

        // Recursively check if the left and right subtrees are identical
        return isSameTree(s->left, t->left) && isSameTree(s->right, t->right);
    }
};
