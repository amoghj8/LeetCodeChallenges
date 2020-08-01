class Solution {
public:
    bool detectCapitalUse(string word) {
        if(isupper(word[0])){
            int capCount = 1;
            for(int i=1;i<word.size();i++) {
                if(isupper(word[i])) {
                    capCount +=1;
                }
            }
            if(capCount!=word.size()) {
                if(capCount!=1) {
                    return false;
                }
                else {
                    return true;
                }
            }
        }
        else {
            for(int i=1;i<word.size();i++) {
                if(isupper(word[i])) {
                    return false;
                }
            }
        }
        return true;
    }
};