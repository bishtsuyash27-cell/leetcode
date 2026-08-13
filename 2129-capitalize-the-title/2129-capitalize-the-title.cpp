class Solution {
public:
    string capitalizeTitle(string s) {
        int n = s.size();
        int i = 0 ;

        while(i<n){
            int start = i ; 

            while(i<n && s[i]!=' '){
                i++ ;
            }

            int len =  i - start ;

            if(len>=3){
                if(s[start]>='a' && s[start]<='z'){
                    s[start] = s[start]-32 ;
                }
                for(int  j = start+1 ; j<i;j++){
                    if(s[j]>='A' && s[j]<='Z'){
                        s[j] = s[j]+32 ;
                    }
                }

            }
            else{
                if(s[start]>='A' && s[start]<='Z'){
                    s[start] = s[start]+32 ;
                }
                
                if(s[start+1]>='A' && s[start+1]<='Z'){
                    s[start+1] = s[start+1] + 32 ;
                }
            }
            i++;
        }
        return s ;
    }
};