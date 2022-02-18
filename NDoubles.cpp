#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 10,2,5,3


bool checkIfExist(vector<int>& arr) {

	for(int i = 0; i < arr.size(); i++){
		if(i > 0){
			for(int j = 0; j < i; j++){
				if(arr[i] == arr[j] * 2 || arr[j] == arr[i] * 2){
					return true;
				}
				else {
					return false;
				}
			}
		}
	} 
	return false;  
}



int main(){ 

    vector<int> nums;
    nums.push_back(10);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(3);
 

    int answer = checkIfExist(nums);

    cout << answer << endl;
        /*My testing print statement:
        for(int i = 0; i < answer; i++){
            cout<< arr[i] << endl;
        }(*/
        
}