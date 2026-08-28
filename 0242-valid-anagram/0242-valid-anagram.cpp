class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false ;
        }
        unordered_map<char,int>mp1 ;
     
    
        for(int i = 0 ; i<s.size();i++){
            mp1[s[i]]++;
        }

        for(int i = 0 ; i<t.size();i++){
            if(mp1.find(t[i])!=mp1.end()){
                mp1[t[i]]--;
                if(mp1[t[i]]==0){
                    mp1.erase(t[i]);
                }
            }
            else{
                return false ;
            }

        }
return true ;
}
};