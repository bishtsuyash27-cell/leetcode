class Solution {
public:
void solve(string digits,vector<string>&finalans,string arr[],int index,string ans){
    if(index==digits.size()){
        finalans.push_back(ans);
        return ;
    }
    int value = digits[index]-'0';
    string s = arr[value];
    for(int i = 0 ; i<s.size();i++){
        ans.push_back(s[i]);
        solve(digits,finalans,arr,index+1,ans);
        ans.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string>finalans ;
        string arr[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,finalans,arr,0,"");

        return finalans ;


    }
};