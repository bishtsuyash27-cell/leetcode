class Solution {
public:
void solve(string digits,vector<string> &finalans,map<char, string>& mp,int index,string ans ){
    if(index==digits.size()){
        finalans.push_back(ans);
        return ;
    }
     char curr = digits[index];
     string s = mp[curr];
    
    for(int i = 0 ; i<s.size();i++){
        ans.push_back(s[i]);
        solve(digits,finalans,mp,index+1,ans);
        ans.pop_back();
    }
    
}
    vector<string> letterCombinations(string digits) {
        vector<string>finalans ;
        map<char, string> mp;

            mp['2'] = "abc";
            mp['3'] = "def";
            mp['4'] = "ghi";
            mp['5'] = "jkl";
            mp['6'] = "mno";
            mp['7'] = "pqrs";
            mp['8'] = "tuv";
            mp['9'] = "wxyz";
            
        solve(digits,finalans,mp,0,"");
        return finalans ;
    }
};