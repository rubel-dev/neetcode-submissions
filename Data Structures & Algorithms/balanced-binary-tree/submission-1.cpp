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
    int ans = 1;
    int dfs(TreeNode* root) {
        if(root == nullptr) return 0;
        int left = 1 + dfs(root->left);
        int right = 1 + dfs(root->right);
        if(abs(left-right) > 1) {
            ans = 0;
             
        }
        return max(left, right);
    }
    bool isBalanced(TreeNode* root) {
         dfs(root);
         return ans;

    }
};
