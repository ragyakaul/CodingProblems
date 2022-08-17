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
    bool isUnivalSubtree(TreeNode* root){
        if(!root){
            return true;
		}
        if((!root->left || root->val == root->left->val && isUnivalSubtree(root->left))
			&& (!root->right || root->val == root->right->val && isUnivalSubtree(root->right))){
            return true;
		}
		return false;
	}
                     
    int countUnivalSubtrees(TreeNode* root) {
        if(!root){
            return 0; 
        }
				
	    return countUnivalSubtrees(root->left) + countUnivalSubtrees(root->right) + isUnivalSubtree(root);
    }
};