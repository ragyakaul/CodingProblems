#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  

 // Iterate through the array
 // If a 0 is spotted
 // Push back all the elements after this 0
  //  Start at the end of the array and copy the previous element
  //  onto the current element. Move to previous element & repeat
 //Change next value to 0 
 // Skip the newly added 0
  
  //int arr[8] = {1,0,2,3,0,4,5,0};   
  
  
  vector<int> arr;
 

 cout << "Enter vals: ";
  for(int i = 0; i < 8; i++){ 
    int temp;
    cin  >> temp;
    arr.push_back(temp);
  }
  

 
  for(int i = 0; i < arr.size(); i++){
    if(arr[i] == 0){
       for(int j = arr.size() - 1; j > i; j--){ //while you have not reached zero
           arr[j] = arr[j - 1];  
       }
       i++;
    } 
    
  }
  cout << "Result: ";
  for(int i = 0; i < arr.size(); i++){
      cout << arr[i] << " ";
  }
  cout << endl;
}






