class Solution {
public:
    bool rotateString(string s, string goal) {
       string  c = s+s ;
        bool flag = false ;

        if(s.size()!=goal.size()){
            return false ;
        }



        for(int i = 0 ; i<goal.size();i++){
            int j = 0 ;

            while(j<goal.size() && c[i+j]==goal[j]){
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