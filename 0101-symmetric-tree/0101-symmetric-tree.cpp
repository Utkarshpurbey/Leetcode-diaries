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
    bool checkEachNode(TreeNode * left,TreeNode *right){
        if(left == NULL && right == NULL) return true;
        if(!left || !right) return false;
        bool basicCheck = left->val == right->val;
        return basicCheck && checkEachNode(left->left,right->right) && checkEachNode(right->left,left->right);
    }
    bool isSymmetric(TreeNode* root) {
        return checkEachNode(root->left,root->right);
    }
};