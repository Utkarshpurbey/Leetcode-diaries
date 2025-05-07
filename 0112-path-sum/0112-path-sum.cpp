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
    bool eachTraveralSum(TreeNode *root,int sum,int targetSum){
        if(root == NULL){
           return false;
        }
        sum+=root->val;
        if(root->left == NULL && root->right == NULL) {
            return sum == targetSum;
        }
        bool left = eachTraveralSum(root->left,sum,targetSum);
        bool right =eachTraveralSum(root->right,sum,targetSum);
        return left || right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       if(root == NULL) return false; 
       return eachTraveralSum(root,0,targetSum);
    }
};