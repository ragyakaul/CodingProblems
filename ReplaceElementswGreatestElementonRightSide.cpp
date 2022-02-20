#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> replaceElements(vector<int>& arr) {
	cout << "arr size: " << arr.size() << endl;
	for(int i = 0; i < arr.size(); i++){

		cout << "i is: " << i << endl;

		if(i != arr.size() - 1){
			arr[i] = *max_element(arr.begin() + 1 + i, arr.end());
			cout << "arr[i] is: " << arr[i] << endl;
		}
		
		else {
			arr[arr.size() - 1] = -1;
			cout << "arr[i] is: " << arr[i] << endl;

		}
		

		

		
	} 
	return arr;      
}

//arr.begin = arr[1] = 18
//arr.begin = arr[2] = 5


int main(){
	vector <int> x;
	x.push_back(17);
	x.push_back(18);
	x.push_back(5);
	x.push_back(4);
	x.push_back(6);
	x.push_back(1);
	//x.push_back(400);
	
    // 17 18 5 4 6 1
	replaceElements(x);

}