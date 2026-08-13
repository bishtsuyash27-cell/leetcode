class Solution {
public:
    int numberOfSpecialChars(string s) {
        vector<int>upercase(26,0);
        vector<int>lowercase(26,0);

        for(int i = 0 ; i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                lowercase[s[i]-'a'] = 1 ;
            }
            else{
                upercase[s[i]-'A'] = 1 ;
            }
        }
    int count = 0 ;
        for(int i = 0 ; i<26;i++){
            if(upercase[i]==1 && lowercase[i]==1){
                count++;
            }
        }
        return count ;
    }
};