#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int heightChecker(vector<int>& heights) {
    
    vector<int> expected;
    int count = 0;

    for(int i = 0; i < heights.size(); i++){
    	expected.push_back(heights[i]);  	
    }
    sort(expected.begin(), expected.end());

	for(int i = 0; i < heights.size(); i++){
		if(expected[i] != heights[i]){
			cout << "it is: " << heights[i] << endl;
			cout << "which does not match with: " << expected[i] << endl;
			count++;
		}
	}
	return count;
}


int main(){
	vector <int> x;
	x.push_back(1);
	x.push_back(1);
	x.push_back(4);
	x.push_back(2);
	x.push_back(1);
	x.push_back(3);

	cout << heightChecker(x) << endl;	
}

/*
1	1	1	2	3	4	expected
1	1	4	2	1	3	heights
		+		+	+
*/