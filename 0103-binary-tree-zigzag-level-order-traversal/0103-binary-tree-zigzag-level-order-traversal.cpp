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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>arr;
       queue<TreeNode *> q;
      
       if(root == NULL) return arr;
       q.push(root);
       bool isReverse = false;
       while(!q.empty()){
            int n = q.size();
            vector<int>level(n);

            for(int i =0;i<n;i++){
                int j = !isReverse ? i :n-1-i;
                TreeNode *curr_ele = q.front();
                level[j] = curr_ele->val;
                q.pop();
                if(curr_ele->left!= NULL) q.push(curr_ele->left);
                if(curr_ele->right!=NULL) q.push(curr_ele->right);
            }
            isReverse = !isReverse;
            arr.push_back(level);
       }
       return arr;
    }
};