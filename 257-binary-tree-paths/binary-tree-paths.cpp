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
    void path(TreeNode* root,vector<string>&ans,string s,bool valid){
        if(root==nullptr) return ;
        if(root->left==nullptr&&root->right==nullptr){
            valid=true;
            s=s+to_string(root->val);
          
            ans.push_back(s);
            return ;
        }
        s=s+to_string(root->val)+"->";
        path(root->left,ans,s,valid);
        path(root->right,ans,s,valid);
        if(valid==false){
            s.pop_back();
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        path(root,ans,"",false);
        return ans;
    }
};