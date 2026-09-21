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
    int ans = 0;
    int dfs(TreeNode *root) {
        if(root == nullptr) return 0;
        int left = 0, right = 0;
        if(root->left != nullptr) {
            left = 1 + dfs(root->left);
        }
        if(root ->right != nullptr) {
            right = 1 + dfs(root->right);
        }
        ans = max(ans, left + right + 1);
        int mx = max(left, right);
        return  mx;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        dfs(root);
        return ans-1;
    }
};
