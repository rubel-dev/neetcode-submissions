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
    int mx = 0;
    int max_difference(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
    
        int left = 1+max_difference(root->left);
        int right = 1+max_difference(root->right);
        mx = max(mx, abs(right-left));
        return max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        max_difference(root);
        if(mx >1) return false;
        return true;

    }
};
