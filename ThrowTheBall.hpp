#include <iostream>
using namespace std;



class ThrowTheBall {


public:
//INPUTS: N = 5, M = 3, L = 2
//OUTPUT: Number of times the ball is passed (arrows in the diagram)
	int timesThrown(int N, int M, int L){

	
		int arr[50]; //Dynamic arrays with N size don't work here 
		for(int i = 0; i < N; i++) { //To initialize the values of the array with 0s
			 arr[i] = 0;
		}
				
		int currentPlayer = 0; //Player 1 is in slot 0 //Who has the ball
		int passes = 0;
		arr[0]++; //How many times they've had it
		while (arr[currentPlayer] != M) { 
				//cout << "player " << currentPlayer + 1 << " has the ball. He's had it " << arr[currentPlayer ] << " time(s), so he passes it to his ";
				if (arr[currentPlayer] % 2 == 0){ //If p is even
					currentPlayer += L;
					//cout << "right" << endl;
				}

				else {
					currentPlayer -= L; 
					//cout << "left" << endl;
				}
				
				//Maintain the circle
				if(currentPlayer < 0){
					currentPlayer = currentPlayer + N;
				}

				else if(currentPlayer > N - 1){ //greater than index of last person
					currentPlayer = currentPlayer - N;
				}
				//Now that we've figured out new current player, increase the number the times they've held the ball
				arr[currentPlayer]++; 
				passes++; 

		} 	
		//cout << "player " << currentPlayer + 1 << " has the ball. He's had it " << arr[currentPlayer ] << " time(s), so the game ends " << endl;

		return passes;		

	}
								

 };


