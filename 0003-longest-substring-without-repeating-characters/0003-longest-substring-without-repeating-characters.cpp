class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 ;
        int j = 0 ;
    vector<int>freq(256,0);


    int maxcount = 0 ;
    int count = 0 ;
        while(j<s.size()){
            count = 0 ;
            freq[s[j]]++;
             
            while(freq[s[j]]>1){
                freq[s[i]]--;
                i++;
            }

            
            count = j - i + 1; 
            j++;
            maxcount = max(maxcount,count);
            
        }
        return maxcount ;
    }
};