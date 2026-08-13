class Solution {
public:
    bool detectCapitalUse(string s) {
        int n = s.size();
        int uppercase = 0 ;
        
        for(int i = 0 ; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                uppercase++;
            }   
        }

        if(uppercase==s.size()){
            return true;
        }
        else if(uppercase==0){
            return true ;
        }
        else if(uppercase==1){
            if(s[0]>='A' && s[0]<='Z'){
                return true;
            }
            else{
                return false ;

            }
        }

        return false ;



    }
};