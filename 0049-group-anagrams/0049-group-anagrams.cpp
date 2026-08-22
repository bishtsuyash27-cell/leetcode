class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ;    
        vector<string>key ;
        for(int i = 0 ; i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
bool found = false ;
            for(int j = 0 ;j<key.size();j++){
                

                if(key[j]==s){
                    found = true ;
                    ans[j].push_back(strs[i]);
                    break ;
                }

                
            }
            if(!found){
                    vector<string>newstring;
                    key.push_back(s);
                    newstring.push_back(strs[i]);
                    ans.push_back(newstring);
                }
        }
        return ans ;
    }
};