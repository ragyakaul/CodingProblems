#include <iostream>
using namespace std;

class Solution {
public:
        
    int findMaxConsecutiveOnes(vector<int>& nums) {  
        int countones = 0; 
        int maxcount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                    countones = countones + 1;
            }  
            else {
                 //update maxcount value if countones > maxcount
                    maxcount = max(countones, maxcount);
                    countones = 0;
            }
         }
            //int answer = max(countones, maxcount);
         return max(countones, maxcount);
      }       
};
