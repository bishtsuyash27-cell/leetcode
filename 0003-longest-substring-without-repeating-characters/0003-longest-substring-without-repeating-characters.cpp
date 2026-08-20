class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);

        int maxcount = 0 ;
        for(int i = 0 ; i<s.size();i++){


            for(int k = 0 ; k<256;k++){
                freq[k] = 0 ;
            }
            int count = 0 ;
            for(int j = i ; j<s.size();j++){
                if(freq[s[j]]==0){
                    count++;
                    freq[s[j]]++;
                }
                else{
                    count = j -i;
                    break ;
                }
              
            }
             if(count>maxcount){
                maxcount = count ;
             }
            
        }
        return maxcount ;
    }
};