#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*
When count is < 3 && max el
1	2	3	max =  1, count = 3
^
*/

int thirdMax(vector<int>& nums) {
	int max = 0;
	int count = 0;
	sort(nums.begin(), nums.end());

	for(int i = nums.size() - 1; i >= 0; i--){		
		if(count < 3 && max != nums[i]){ 
			max = nums[i];
			count++;
		}

	}		
	if(count == 3){
		return max;
	}
	else {
		max = *max_element(nums.begin(), nums.end());
		return max;
	}
}


int main(){
	vector<int> x;
	x.push_back(3);
	x.push_back(2);
	x.push_back(1);
	/*x.push_back(5);
	x.push_back(3);
	x.push_back(5);*/

	cout << thirdMax(x) << endl;
}