class Solution {
public:
    bool rotateString(string s, string goal) {
         if(s.size()!=goal.size()){
            return false ;
        }
       s  = s+s ;
        bool flag = false ;

       



        for(int i = 0 ; i<goal.size();i++){
            int j = 0 ;

            while(j<goal.size() && s[i+j]==goal[j]){
                j++;
            }
            if(j==goal.size()){
                flag = true ;
                break ;
            }

        }
        return flag ;
    }
};