class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string first = strs[0];
        string second = strs[strs.size()-1];
        string ans = "";
        for(int i = 0 ; i<min(second.size(),first.size());i++){
            if(first[i]==second[i]){
                ans+=first[i];
            }
            else{
                break ;
            }
        }
        return ans ;
    }
};