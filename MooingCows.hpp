#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;



class MooingCows {

public:
	int dissatisfaction(vector <string> farmland){


		vector <int> storage;
//your for loops for x and y are going out of range
//you're not quite storing the results of your distance 
//calculations in the correct element of "storage".
		int numberOfCows = 0;
		for(int x = 0; x < farmland.size(); x++){
			for(int y = 0; y < farmland[0].size(); y++){
				if(farmland[x][y] == 'C'){	
					storage.push_back(0);
					//int pos_x = x; //1	//Stores coordinates of the chosen cow
					//int pos_y = y; //1
					for(int i = 0; i < farmland.size(); i++){
						for(int j = 0; j < farmland[0].size(); j++){
							if(farmland[i][j] == 'C' && !(i == x && j == y)){
								//cout << pow(x - i, 2) + pow(y - j, 2) << endl;
								storage[numberOfCows] += (pow(x - i, 2) + pow(y - j, 2));		
								//We want only 1 position of the storage value, position i,
							}	//to keep storing the sum. 0 + 2 + 5 is the first example
						}			
					}
					numberOfCows++;
				} 			//numberOfCows      0         1       2
			}				//vector =       [2 + 5] , [2 + 1] ,[1 + 5]
		}
		for(int i = 0; i < storage.size(); i++){
			cout << storage[i] << ", ";
		}
		cout << endl;
		int min = *min_element(storage.begin(),storage.end());
		return min;
	}
};




