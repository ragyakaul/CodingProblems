
#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <math.h>
#include <algorithm>
#include <sstream>
using namespace std;



class SquareOfDigits {

private: //Any helper functions used
	
//3 4 2 1 9 4 6
//^       ^
//0 1 2 3 4 5 6 


public:

    int getMax(vector <string> data){

       
        int size = data.size();
        if (data[0].size() < size)
        {
        size = data[0].size();
        }

        //int size = std::min(data_ints.size(), data_ints[0].size()); //the smallest of grid width vs grid height;
        //int result = 0;
        while (size > 1)
        {
            //for all locations that that square would fit in the grid
            //"How to make a nested for loop that goes through all indicies that the top-right corner of the square could be in"
            for (int x = 0; x <= (data.size() - size); x++)
            {
                for (int y = 0; y <= (data[0].size() - size); y++)
                {
                    if (data[x][y] == data[x + size - 1][y]
                        && data[x + size - 1][y] == data[x + size - 1][y + size - 1]
                        && data[x + size - 1][y + size - 1] == data[x][y + size - 1]) //may need to revisit this part
                    {
                       return size * size;
                    }
                }
            }
            size--;
        }
    return 1;

    };
