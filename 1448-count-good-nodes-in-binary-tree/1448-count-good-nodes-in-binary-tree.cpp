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
    
    int goodNodes(TreeNode* root) {
        int value = root->val;
        return dfs(root,value);
    }
    int dfs(TreeNode* root ,int value){
        if(root == nullptr)return 0 ;
        int count=0;
        if(root->val >= value)count =1;
        value = max(value,root->val);
        count += dfs(root->left,value);
        count += dfs(root->right,value);
        return count;
    }
};