#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <istream>

using namespace std;


class AzimuthMonitoring {

	public:

		//Can always make edge cases a different function. It can be kinda standard to deal w edges
			int edgeCases(int azimuth){ 

				if(azimuth < 0){ 
				azimuth += 360;
				}
				else if(azimuth > 360){ 
					azimuth -= 360;
				} 
				else if (azimuth == 360){
					azimuth = 0;
				}
				return azimuth;
			}
			
			/*   Takes one particular instruction, 
				 splits it up 
				 and returns the number 
				 attached to LEFT/RIGHT   */

			int getNumber(string instruction){ 
				istringstream iss(instruction);
				int numb;
			    string str;

			    iss >> str >> numb;

			    
			    return numb;
			}

			/*int between(x, 0, 360){
				return x => 0 && x <= 360;

			}*/

			int getAzimuth(vector <string> instructions){

				//instructions[50];
				int azimuth = 0;	
				//cout << azimuth << endl;
				int i = 0;

					while(i < instructions.size()){

						int temp_number = getNumber(instructions[i]);
						cout << "The number is " << temp_number << endl;
						cout << instructions[i] << endl;

						if (instructions[i] == "LEFT"){
							azimuth -= 90;
							azimuth = edgeCases(azimuth);
							cout << "Azimuth is " << azimuth << endl;
						}
					
						else if (instructions[i] == "RIGHT"){
							azimuth += 90;
							azimuth = edgeCases(azimuth);
							cout << "Azimuth is " << azimuth << endl;

						}

						else if (instructions[i] == "TURN AROUND"){
							azimuth += 180;
							azimuth = edgeCases(azimuth);
							cout << "Azimuth is " << azimuth << endl;
						}

						else if (instructions[i] == "LEFT " + to_string(temp_number)){ 
							//instructions.substr(instructions.find_first_of(" "))){

							azimuth -= getNumber(instructions[i]);
							azimuth = edgeCases(azimuth);
							cout << "Azimuth is " << azimuth << endl;
						}

						else if (instructions[i] == "RIGHT " + to_string(temp_number)){
							//instructions.substr(instructions.find_first_of(" "))){
							azimuth += getNumber(instructions[i]);
							azimuth = edgeCases(azimuth);
							cout << "Azimuth is " << azimuth << endl;

						}

						else { //HALT
							if(azimuth == 360){
								azimuth = 0;
							}
							return azimuth;
						}
						
						i++;


				}
			if(azimuth == 360){
					azimuth = 0;
			}
			return azimuth;
		}

};


			

				

				

				




















