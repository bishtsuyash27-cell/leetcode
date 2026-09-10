class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans ;

        vector<string>key ;

        for(int i = 0 ; i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            bool found = false ;
            for(int j = 0 ; j<key.size();j++){
                if(s==key[j]){
                    ans[j].push_back(strs[i]);
                    found = true ;
                }
            }
            if(!found){
                vector<string>newgroup;
                newgroup.push_back(strs[i]);
                ans.push_back(newgroup);
                key.push_back(s);
            }
        }
        return ans ;
    }
};