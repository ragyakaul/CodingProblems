#include <iostream>
#include <vector>
using namespace std;

int moveZeros(vector<int>& nums) {
	int ptr = 0;									
	for(int i = 1; i < nums.size(); i++){   		

		if(nums[ptr] == 0 && nums[i] != 0){         
			nums[ptr] = nums[i];			        				
			nums[i] = 0;							
			ptr++;									
		}

		else if(nums[ptr] != 0){
			ptr++;
		}
	}
}

/*
Iteration 1:
nums[0] = 4
nums[1] = 2
Case: Do nothing
i++

Iteration 2: 
nums[0] = 4
nums[2] = 4
Case: Do nothing
i++

Iteration 3:
nums[0] = 4
nums[3] = 0
Case 2
ptr++
i++

Iteration 4:
nums[1] = 2
nums[4] = 0
Case 2
ptr++
i++

Iteration 5:
nums[2] = 4
nums[5] = 3
Case: Do nothing
i++

Iteration 6:
nums[2] = 4
nums[6] = 0
Case 2
ptr++
i++



*/


int main(){
	vector <int> x;
	x.push_back(4);
	x.push_back(2);
	x.push_back(4);
	x.push_back(0);
	x.push_back(0);
	x.push_back(3);
	x.push_back(0);
	x.push_back(5);
	x.push_back(1);
	x.push_back(0);

	cout << moveZeros(x) << endl;
}