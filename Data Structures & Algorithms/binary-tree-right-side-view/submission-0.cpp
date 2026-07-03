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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            for(int i = 0; i + 1 < n; i++ ) {
                TreeNode* u = q.front();
                q.pop();
                if(u->left != nullptr) {
                    q.push(u->left);
                    
                }
                if(u->right != nullptr) {
                    q.push(u->right);
                }
            }
            TreeNode* u = q.front();
            q.pop();
            ans.push_back(u->val);
            if(u->left != nullptr) {
                 q.push(u->left);
                    
            }
            if(u->right != nullptr) {
                q.push(u->right);
            }

        }
         
        return ans;
        
    }
};
