#include <algorithm>
class MovingAverage {
    
private:    
    int head = 0, size, windowSum = 0, count = 0;
    int *queue;
    
public:
    MovingAverage(int Size) { //You generally use this section to declare size it seems. 
       size = Size;
       queue = new int[size];
       for(int i = 0; i < size; i++){
           queue[i] = 0;
       }
    }
    double next(int val) { 
        count++;
        // Calculate the new sum by shifting the window
        int tail = (head + 1) % size; 
        windowSum = windowSum - queue[tail] + val;
        // Move on to the next head
        head = (head + 1) % size;
        queue[head] = val;
        return double(windowSum)/min(size,count);    
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */

/*
head = 0;
size = 3;
windowSum =  14; 
count = 3;
queue = [3 ,1 ,10];
val = 3
tail = 0 



return 1 * 1.0/1 = 1
return 11/2 = 5.5
return 14/3 = 4.66667

*/