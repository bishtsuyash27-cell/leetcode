class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans ;
        vector<string>key ;
    for(int i = 0 ; i<strs.size();i++){
        bool found = false ;
        string s = strs[i];
        sort(s.begin(),s.end());
        for(int j = 0 ; j<key.size();j++){
            if(s==key[j]){
                ans[j].push_back(strs[i]);
                found = true ;
                break ;
            }
        }

        if(!found){
            vector<string>newgroup;
            newgroup.push_back(strs[i]);
            key.push_back(s);
            ans.push_back(newgroup);
        }
    }
return ans ;

    }
};