class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false ;
        }
        unordered_map<char,int>mp1 ;
        unordered_map<char,int>mp2 ;
    
        for(int i = 0 ; i<s.size();i++){
            mp1[s[i]]++;
        }

        for(int i = 0 ; i<t.size();i++){
            mp2[t[i]]++;
        }

    for(auto ele : mp1){
        char ch = ele.first;
        int freq = ele.second ;

        if(mp2.find(ch)!=mp2.end()){
            if(freq!=mp2[ch]){
                return false ;
            }
        }
        else{
            return false ;
        }
    }
        return true ;
}
};