#include <iostream>
using namespace std;
 
 
class Inchworm {


  private:
  	 int branch; //the length of the branch
  	 int rest;	 //the distance traveled by the inchworm between rests
  	 int leaf;	 //distance between each consecutive pair of leaves


  public:
//Example: 21, 7, 3

	  int lunchtime(int branch, int rest, int leaf){
	  	int res = 1; //leaf consumed as we proceed
		int dist_travelled_so_far = 0; //tracking how far worm has travelled

			while(dist_travelled_so_far != branch){
				dist_travelled_so_far += rest; 

			    //cout << "Distance travelled so far :" << dist_travelled_so_far << endl;

			    if(dist_travelled_so_far % leaf == 0){
					res += 1;
					//leaf += leaf; (should not be required with modulo)
				}	

				//leaf +=leaf;
				//cout << "leaf:" << leaf << endl;

				if(dist_travelled_so_far > branch){
					return res;
				}
				
			   //cout << "Result:" << res << endl;
			}
	    return res;  // return your result
	  }
};
