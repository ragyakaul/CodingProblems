#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//Phase 4:
//"Make that into working code"
	

 int removeElement(vector<int>& nums, int val) {
  	for(int i = 0; i < nums.size(); i++){ // Green arrow
	if(nums[i] == val){ // Red exclamation
		bool swapped = false;
			for(int j = nums.size() - 1; j > i; j--){ // Blue arrow

					if(nums[j] != val){ // If j points at val, move down to for loop
						// Swap i & j
						int temp = nums[i];
						nums[i] = nums[j];
						nums[j] = temp;
						swapped = true;
						break; // Breaks out of blue arrow onto green arrow
					}
				} // If this for loop finishes without a swap happening, then we're at the end
				if (!swapped) {
					return i;
				}
			}
		}
		// If the code makes it here, that means there was no "val" in the list
		return nums.size(); 
    }	




int main(){ 

	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(0);
	nums.push_back(4);
	nums.push_back(0);
	
	removeElement(nums,2);

		// My testing print statement:
		for(int i = 0; i < 8; i++){
			cout<< nums[i] << endl;
		}

		//
}



/*
This is my process of working through a problem:

Phase 1:
"How do I solve the problem in english":

	Go through this array from the start, look for vals
	matching the "val". When it's spotted, remove it. Move 
	the rest of the array to this element's place("overwrite it")
	(that's how you remove it)

	Problem: Start seems to be a challenge cuz there could be unlimited 2s 
	(using this as value). Let's start from end.

	Go through arr from the end, look for 2. 
	When you see 2, move everything to the left.



Phase 2:
"Break that down further"
	
	For loop iterating through array in reverse, if val is encountered , 
	move the entire arr to the left 


Phase 3:
"Finish the psudocode"
	
	//[3,2,2,3], val = 2
	
	int length;
	for(int i = length; i > 0; i--){

		if(arr[i] = val){
			arr[i] == arr[i + 1]
		}

		then later adjust the length 
		maybe length--	
	}


*/
