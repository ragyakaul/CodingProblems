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
/*
Where does self go? Does it go pre, before left & right. In, between left & right. Or post, after left & right. But left is before right. 

*/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> temp;  
        //base case
        if(root == nullptr){ //NULL & nullptr are the same. nullptr is newer, accepted standard.      
            return temp;
        }
        else {
        
            
             vector<int> left_children = postorderTraversal(root->left);
             temp.insert(temp.end(), left_children.begin(), left_children.end()); 
            
             vector<int> right_children = postorderTraversal(root->right);
             temp.insert(temp.end(), right_children.begin(), right_children.end());
             
             temp.push_back(root->val);
 
            
             return temp;
        }        
    }
};