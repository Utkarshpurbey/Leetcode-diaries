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
    void helper(TreeNode *root,string temp,vector<string>&ans){
        if(root == NULL){
            return;
        }
        temp+=(root->val+'0');
        if(root->left == NULL && root->right== NULL) 
            {ans.push_back(temp); return;}
        
        helper(root->left,temp,ans);
        helper(root->right,temp,ans);
        
    }
    int sumNumbers(TreeNode* root) {
        vector<string>ans;
        helper(root,"",ans);
        int temp=0;
        for(string i:ans){
            temp+=stoi(i);
        }
        return temp;
    }
};