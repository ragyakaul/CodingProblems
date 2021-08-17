#include <iostream>
#include <string>
using namespace std;




class StreetParking {
//INPUT: "---B--S-D--S--"

	public:
		int freeParks(string street) //Initialized street with a maximum of 50 characters	
		{ 
			int parkingspaces = 0;

			for(int i = 0; i < street.length(); i++)
			{	
				//cout << "Iteration: " << i << endl;

				if((street[i] != 'S') 
				&& (street[i] != 'D')
				&& (street[i] != 'B')
				&& ((i >= street.length() - 1) || (street[i + 1] != 'B' && street[i + 1] != 'S')) 
				&& ((i >= street.length() - 2) || (street[i + 2] != 'B'))
				&& (street[i - 1] != 'S'))
				{
							parkingspaces++;
							//cout << "Parking spaces are now: " << parkingspaces << endl;					 			
				}

			}
			return parkingspaces;
		}

}; 