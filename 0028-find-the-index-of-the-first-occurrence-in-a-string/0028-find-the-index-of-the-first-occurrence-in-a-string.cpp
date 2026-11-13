class Solution {
public:
vector<int>buildlps(string needle){
    vector<int>lps(needle.size(),0);    
    int m = needle.size();
int i = 1 ;
int len = 0 ;
    while(i<m){
        if(needle[i]==needle[len]){
            len++;
            lps[i] = len ;
            i++;
        }
        else{
            if(len!=0){
                len = lps[len-1];
            }
            else{
                lps[i] = len ;
                i++;
            }
        }

    }
    return lps ;
}
    int strStr(string haystack, string needle) {
       

    int n = haystack.length();
    int m = needle.length();

    
    if (n < m) return -1;

     vector<int>lps = buildlps(needle);
         int i = 0;
        int j = 0;

        while(i<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            
            if(j==m){
                return i-j;
            }
    }
    else{
        if(j!=0){
            j = lps[j-1];
        }
        else{
            i++;
        }
    }

        }
return -1 ;
    }
};