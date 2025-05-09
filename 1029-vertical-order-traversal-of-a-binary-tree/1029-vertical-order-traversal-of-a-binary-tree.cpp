typedef pair<TreeNode*,pair<int,int>> levelInfo;
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<levelInfo>que;
        map<int,map<int,multiset<int>>> ms;
          vector<vector<int>>ans;
        if(root == NULL) return ans;
        levelInfo initalValue = make_pair(root,make_pair(0,0));
        que.push(initalValue);

        while(!que.empty()){
            int n = que.size();
            while(n--){
                levelInfo currLevel = que.front();
                TreeNode * currNode = currLevel.first;
                pair<int,int> posDetails = currLevel.second;
                ms[posDetails.first][posDetails.second].insert(currNode->val);
                que.pop();
                if(currNode->left != NULL){
                    que.push(make_pair(currNode->left,make_pair(posDetails.first-1,posDetails.second+1)));
                }
                if(currNode->right != NULL){
                    que.push(make_pair(currNode->right,make_pair(posDetails.first+1,posDetails.second+1)));
                }
            }
        }

        for(auto i:ms){
            vector<int>temp;
            for(auto j:i.second){
               for(int k:j.second){
                temp.push_back(k);
               }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};