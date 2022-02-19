#include <iostream>
#include <vector>
using namespace std;


/*
If it's increasing and we find a decrease, keep note
If it's decreasing and we find an increase, return false
If you find duplicates, always false //done
If less than 3, return false //done

Need to check all the elements
If you have checked all the elements, return true

Boolean -> increasing
*/

 bool validMountainArray(vector<int>& arr) {
    bool pivot = false;	

 	if(arr.size() < 3) {
 		return false;
 	}
 	else if(arr[1] < arr[0]){
 		return false;
 	}
 	for(int i = 0; i < arr.size() - 1; i++){	
 	    if(arr[i + 1] == arr[i]){
 			return false;
 		}
 		else if(pivot == false && arr[i + 1] < arr[i]){
 			pivot = true;
 		}
 		else if(pivot == true && arr[i + 1] > arr[i]){
 			return false;
 		}
 	}
 	return pivot;
 }


 int main(){
 	 vector <int> x; 
 	 x.push_back(1);
 	 x.push_back(2);
 	 x.push_back(3);
 	 x.push_back(-1);
 	 x.push_back(-2);
 	 x.push_back(-5);
 	 x.push_back(-7);
 	

 	 cout << validMountainArray(x) << endl;

 }

 /* Check edge cases before submitting:
-> If the input is empty
-> If there's only 1 element 
-> In an average case
-> If the data is in a weird order
-> Check negative numbers 
 */
