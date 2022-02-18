#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//nums = [0,0,1,1,1,2,2,3,3,4]

/*

Try this algorithm: "Start at the second element of the array 
(current element, we'll call it "CE").
 Have a variable to save the index of the last valid element (LVE) 
 in the array (at the start,
  that is the first element).If the current element is not equal
   to the last valid element (LVE), 
  then move the index of the LVE one forward and copy the CE
   into the LVE's spot. Move the CE index forward by one, and repeat.
    End when CE reaches the end 
   - final length of the array is the index of LVE."


*/

// Try this solution 

int removeDuplicates(vector<int>& nums) {
    
    int LVE = 0;
    for(int CE = 1; CE < nums.size(); CE++){
        if(nums[CE] != nums[LVE]){
            LVE++;
            nums[LVE] = nums[CE];
        }   
    }
    return LVE + 1;




   /* int i ;
    int LVE = nums[i];
    int CE = nums[i + 1];
    
    while(i != nums.size() -1){
        if(CE != LVE){ // What about when it is equal? Do we just move it by the "red arrow method"?
            i++;
            LVE = CE;
            CE++;
        }
        else { //red arrow method
             for(int j = i + 1; j < nums.size(); j++){ 
                nums[j - 1] = nums[j];                      
            }
        }
    }*/
}  






// Very inefficient solution but yields the correct answer
/*int removeDuplicates(vector<int>& nums) {
    
    int unique = 0;
        for(int i = nums.size() - 1; i > 0; i--){ 
            if(nums[i - 1]  == nums[i]){
                unique++;
                 for(int j = i + 1; j < nums.size(); j++){ 
                     nums[j - 1] = nums[j];                      
                }
            }
        }        
    return nums.size() - unique;
}  */

int main(){ 

    vector<int> nums;
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);

    int answer = removeDuplicates(nums);

        //My testing print statement:
        for(int i = 0; i < answer; i++){
            cout<< nums[i] << endl;
        }

        //
}


/*

Phase 1:
"How do I solve the problem in english":

Start from the back of the array. Look at what the element right
before it is, if it's the same, copy the elements after the position we're at
to the position we're at. Keep repeating this process till the first part 
of the arr contains the solution.



Phase 2:
"Pseudocode":

for(int i = arr.size;, i > 0; i--){ // Green arrow
    
    if array[i - 1]  == arr[i] // Red exclamation

 we want to remove element at i. start next for loop from i + 1.

    for(int j = i + 1; j < arraysize; j++){ 
        
             array[j - 1] = arr[j]      // When to stop ??? -> another for loop?

    }

}


//PARTIAL ANSWER w/ wrong length:
int removeDuplicates(vector<int>& nums) {
    
    for(int i = nums.size() - 1; i > 0; i--){ 
        if(nums[i - 1]  == nums[i]){
             for(int j = i + 1; j < nums.size(); j++){ 
                 nums[j - 1] = nums[j];    
                 }
            }
        }        
        return nums.size();
    }

*/