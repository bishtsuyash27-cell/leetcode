class Solution {
public:
bool isvalid(char s ){
    if( (s>='a' && s<='z') || (s>='A' && s<='Z') || (s>='0' && s<='9')){
        return true ;
    }
return false ;
}
char makelower(char s ){
    if(s>='A' && s<='Z'){
        return s = s+32 ;
    }
    return s ;
}
    bool isPalindrome(string s) {
        int i = 0 ; 
        int j = s.size()-1 ;

        while(i<j){

            while(i<j && !isvalid(s[i])){
                i++;
            }

            while(i<j && !isvalid(s[j])){
                j--;
            }

            if(makelower(s[i])!=makelower(s[j])){
                return false ;
            }
            i++;
            j--;
        }
        return true ;
    }
};