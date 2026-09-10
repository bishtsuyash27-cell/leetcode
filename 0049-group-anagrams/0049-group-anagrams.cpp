class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string >>mp ;
        vector<vector<string>>ans ;
        for(int i = 0 ; i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s)==mp.end()){
                vector<string>v ;
                v.push_back(strs[i]);
                mp[s] = v ;
                
            }else{
                mp[s].push_back(strs[i]);
            }
            
        }
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans ;
    }
};