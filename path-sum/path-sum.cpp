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
    int sum = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        //BASE CASE
        if(root == NULL){
            return false;
        }   
        //RECURSIVE CASE
       targetSum = targetSum - root->val;
       if(targetSum == 0 && root->left == NULL && root->right == NULL){
           return true;
       }
       if(hasPathSum(root->left, targetSum))// 
			 {  
            return true;
       }             
       return hasPathSum(root->right, targetSum); //
    }
};