class Solution {
public:
    bool checkDivisibility(int n) {
        int k = n ;
        int sum = 0 ;
        int product = 1 ;
        while(k>0){
            sum += k%10 ;
            product *=k%10 ;

            k = k/10 ;
        }
        if(n%(sum+product)==0){
            return true ;
        }
        else {
        return false ;
        }
    }
};