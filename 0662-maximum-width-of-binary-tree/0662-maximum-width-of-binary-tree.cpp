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
typedef pair<TreeNode *,pair<unsigned long long,unsigned long long>> levelType;
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<levelType> q;
        int ans =0;
        if(root == NULL) return 0;
        q.push({root,{0,0}});
        while(!q.empty()){
            int n = q.size();
            vector<int> level;
            while(n--){
                levelType curr_info = q.front();
                TreeNode * curr_node = curr_info.first;
                level.push_back(curr_info.second.second);
                q.pop();
                if(curr_node->left!=NULL){
                    q.push(make_pair(curr_node->left,make_pair(curr_info.second.first+1,2*curr_info.second.second+1)));
                }
                if(curr_node->right!=NULL){
                     q.push(make_pair(curr_node->right,make_pair(curr_info.second.first+1,2*curr_info.second.second+2)));
                }
            }
            int n1 = level.size();     
            ans = max(ans,level[n1-1]-level[0]+1);
        }
        return ans;
    
    }
};