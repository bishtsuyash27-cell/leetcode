class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(), s.end());

        string ans = "";
        int i = 0;

        while(i < s.size()) {

        
            while(i < s.size() && s[i] == ' ') {
                i++;
            }
    if(i == s.size()) {
                break;
            }
        
            int start = i;

           
            while(i < s.size() && s[i] != ' ') {
                i++;
            }

            int end = i;

            
            reverse(s.begin() + start, s.begin() + end);

          
            if(!ans.empty()) {
                ans += " ";
            }

          
            ans += s.substr(start, end - start);
        }

        return ans;
    }
};