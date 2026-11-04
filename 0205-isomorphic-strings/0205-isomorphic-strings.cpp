class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false ;
        }
        int n = s.length();
        vector<int>map(256,-1);
        vector<int>check(256,false);



        for(int i = 0 ;i<n; i++){
            if(map[s[i]]==-1){
                if(check[t[i]]==true){
                    return false ;
                }
                map[s[i]] = t[i];
                check[t[i]] = true ;
            }
            else{ // if s[i] is already map to any t[i] than this condition runs 
                if(map[s[i]]!=t[i]){
                    return false; 
                } 
            }
        }
        return true ;
    }
};