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
class Solution { //Bottom up worked! 
public:
    int maxDepth(TreeNode* root) {
	    if(root == NULL){
	        return 0;  //RETURN 0!!!!!!
	    }
	    int left_depth = maxDepth(root->left);
	    int right_depth = maxDepth(root->right);
	    return max(left_depth + 1, right_depth + 1);
	}
   
};