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
    
    int dfs(TreeNode* p, TreeNode* q) {
        int ans = 1;
        if(p == nullptr && q == nullptr) {
            return 1;
        }
        if(p == nullptr || q == nullptr) {
            return 0;
        }
        if(p->val != q->val) return 0;
        ans = ans & dfs(p->left, q->left);
        ans = ans & dfs(p->right, q->right);
        return ans;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int ans = dfs(p, q);
        if(ans) return true;
        return false;
    }
};
