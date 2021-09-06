class Solution {
public:   

    int findNumbers(vector<int>& nums) {
          int evencounter = 0;
        for(int i = 0; i < nums.size(); i++){       
            int counter = 0;
                int a = nums[i]; 
                while (a != 0){  //nums[i] value doesnt change if you put it here
                    a = a/10;
                    counter++;
                }    
            
                if(counter % 2 == 0){
                    evencounter++;
                }              
        }
        return evencounter;      
    }
};
