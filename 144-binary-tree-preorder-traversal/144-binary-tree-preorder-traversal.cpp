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
    vector<int> preorderTraversal(TreeNode* root) {
        
      /*  class Node {
            int data;
            Node * left;
            Node * right;
            
        };*/
        vector<int> temp;  
        //base case
        if(root == nullptr){ //NULL & nullptr are the same. nullptr is newer, accepted standard.      
            return temp;
        }
        else {
             temp.push_back(root->val);
             vector<int> left_children = preorderTraversal(root->left);
             vector<int> right_children = preorderTraversal(root->right);
             temp.insert(temp.end(), left_children.begin(), left_children.end());
             temp.insert(temp.end(), right_children.begin(), right_children.end());
             return temp;
        } 
    }
};