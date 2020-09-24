// 389. Find the Difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int result=0;
        for(int i=0;i<t.size();i++) {
            if(i<s.size())
                result^=(s[i]-'a');
            result^= (t[i]-'a');
        }
        return (char)(result+'a');
    }
};