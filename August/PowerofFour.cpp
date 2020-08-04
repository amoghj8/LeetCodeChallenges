class Solution {
public:
    bool isPowerOfFour(int num) {
        
        double log4num = log2(num) /2 ;
        string l4 = to_string(log4num);
        
        size_t found = l4.find(".");
        if(num<1)
            return false;
        else if(!(stoi(l4.substr(found+1))))
            return true;
        else 
            return false;
    }
};