#include <iostream>
#include <vector>
using namespace std;

// 	1		0		3
    ^
 			^

//while loop
vector<int> sortArrayByParity(vector<int>& nums) {
	int end = nums.size() - 1;
	int begin = 0;
	int temp;
	while(begin < end){
		// Move begin if it is even
		if(nums[begin] % 2 == 0){
			begin++;
		}

		// Move end if it is odd
		else if(nums[end] % 2 != 0){
			end--;
		}

		// Begin is odd, end is even -> swap
		else if(nums[begin] % 2 != 0 && nums[end] % 2 == 0){
			temp = nums[begin];
			nums[begin] = nums[end];
			nums[end] = temp;
			cout << "begin " << nums[begin] << endl;
			cout <<  "end " << nums[end] << endl;
		}

	}
	for(int begin = 0; begin < nums.size(); begin++){
		cout << nums[begin] << endl;
	}
	return nums;
}






int main(){
	vector <int> x;
	x.push_back(1);
	x.push_back(0);
	x.push_back(3);
	/*
	x.push_back(3);
	x.push_back(1);
	x.push_back(2);
	x.push_back(4);*/

	sortArrayByParity(x);
}