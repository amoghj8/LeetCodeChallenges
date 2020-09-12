// 299. Bulls and Cows

class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0, cows=0;
        for(int i=0;i<secret.size();i++) {
            if(secret[i]==guess[i]) {
                bulls++;
                secret.erase(i,1);
                guess.erase(i,1);
                i--;
            }
        }
        
        vector<int> secMap(10,0), guessMap(10,0);
        
        for(int i=0;i<secret.size();i++) {
            secMap[secret[i]-'0']++;
            guessMap[guess[i]-'0']++;

        }
        
        for(int i=0;i<secMap.size();i++) {
            cows += min(secMap[i],guessMap[i]);
        }
        
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};