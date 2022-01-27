#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


 	int merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    //Occam's razor : Merge and Sort - approach 1 -> High complexity

	/*
	nums1 = [1,2,3,0,0,0]
	m = 3
	nums2 = [2,5,6]
	n = 3
	*/ 	

 	 for(int i = 0; i < n; i++){

 	 	nums1[i + m] = nums2[i]; // nums1[0 + 3] = nums2[i]

 	 }

 	 	sort(begin(nums1), end(nums1));


 	}

 	// Come back to understand and try out n + m solution 




 		/*int last_el_nums2 = nums2.size() - 1; // 2
 		int last_el_nums1 = nums1.size() - 1; // 5

	 	 for(int i = last_el_nums1; i > last_el_nums1/2; i--){
	 	 	

	 	   if(nums1[last_el_nums2] > nums2[last_el_nums2]){ // 3 > 6 (cross) 
	 	   													// 2 > 5 (cross)
	 	   													// 1 > 2 (cross)

	 	   	  nums1[i] = nums1[last_el_nums2]; // [1,2,3,0,0,_] (cross)
	 	   	  cout << nums1[i]; 
	 	   }								  // (cross)
	 	   									  // (cross)

	 	   else {
	 	   	nums1[i] = nums2[last_el_nums2]; // [1,2,3,0,0,6]
	 	   									 // [1,2,3,0,5,6]
	 	   									 // [1,2,3,2,5,6]
	 	   	cout << nums1[i];

	 	   }								 

	 	   nums2[last_el_nums2]--;
	 	 	
	 	 }		 	   
	}*/

int main(){ // Functioning properly, reference 
	
	vector <int> a;
	vector <int> b;
 //Review: the most common way to populate a vector
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(0);
	a.push_back(0);
	a.push_back(0);

	b.push_back(2);
	b.push_back(5);
	b.push_back(6);

	merge(a, 3, b, 3);
}