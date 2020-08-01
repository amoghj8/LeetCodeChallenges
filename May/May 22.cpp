void invert(map<char,int> &char_int_map, multimap<int, char, greater<int>>&multimap_int_char) {
        map<char,int>::iterator it;
        for(it=char_int_map.begin(); it!=char_int_map.end(); it++) {
            multimap_int_char.insert(pair(it->second, it->first));
        }
    }
    
    string frequencySort(string s) {
        if(s.length()==0 || s.length()==1)
            return s;
        string result;
        map<char,int> count_char;
        multimap<int, char, greater<int>> multimap_int_char;
        multimap<int, char, greater<int>>::iterator it;
        for(int i=0;i<s.length();i++) {
            count_char[s[i]]++;
        }
        
        invert(count_char, multimap_int_char);
        for(it=multimap_int_char.begin();it!=multimap_int_char.end();it++) {
            result.append(it->first, it->second);
        }
        
        return result;
        
    }
