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
    TreeNode* ans = nullptr;
    void dfs(TreeNode*root, TreeNode*p, TreeNode* q) {
        if(root == nullptr || ans != nullptr) return;
        if((p->val < root->val) && (q->val < root->val)) {
             dfs(root->left, p, q);
        }
        else if((p->val > root->val) && (q->val > root->val)) {
             dfs(root->right, p, q);
        }
        else{
            ans = new TreeNode(root->val);
            return;
        }
        
        
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        dfs(root, p, q);
        return ans;
    }
};
