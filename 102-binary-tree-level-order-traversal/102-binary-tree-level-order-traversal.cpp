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
#include <queue>

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        std::queue<TreeNode*> myQueue;
        std::queue<int> lvlQueue;
        myQueue.push(root);
        lvlQueue.push(0);
        int currentLevel = -1;
       // std::cout << myQueue.front()->val;
        while(!myQueue.empty()){
            TreeNode *item = myQueue.front();
            myQueue.pop();
            int level = lvlQueue.front();
            lvlQueue.pop();
            if(item != NULL) {
                if(currentLevel != level){
                  //  std::cout << level << endl;
                    //create new temp vector
                    vector<int> temp; // empty vector of ints
                    temp.push_back(item->val); // put the number from the front of the queue in it
                    answer.push_back(temp); // adding the vector with a number in it to our vec of vecs
                }
                else {
                    //add this item to the most recent level
                   // std::cout << level << " ! " << endl;
                    answer.back().push_back(item->val);
                    
                }
                
                myQueue.push(item->left);
                myQueue.push(item->right);
                lvlQueue.push(level + 1);
                lvlQueue.push(level + 1);
                currentLevel = level;
            }
            
        }
        return answer;
    }
};