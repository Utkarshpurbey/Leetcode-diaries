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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>>ans;
        if(root== NULL) return ans ;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            for(int i =0;i<size;i++){
                TreeNode * currEle = q.front();
                level.push_back(currEle->val);
                q.pop();
                if(currEle->left!=NULL){
                    q.push(currEle->left);
                }
                if(currEle->right!=NULL){
                    q.push(currEle->right);
                }
            }
            ans.push_back(level);
        }
        return ans;
    }
};