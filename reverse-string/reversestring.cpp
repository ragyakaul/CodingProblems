class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp = 0;
        int first = 0;
        int last = s.size() - 1;
        while(first < last){ //
            temp = s[first];
            s[first] = s[last];
            s[last] = temp;
            first++;
            last--;
        }
        
    }
};
