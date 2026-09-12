class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>remainder(k,0);
        for(int i = 0 ; i<arr.size();i++){
            int rem = arr[i]%k ;
            if(rem<0){
                rem = rem+k ;
            }
            remainder[rem]++;
        }
        if(remainder[0]%2!=0){
                    return false ;
                }
        for(int i = 0 ; i<remainder.size();i++){
            int required = (k - i)%k ;
            
            if(remainder[i]!=remainder[required]){
                return false ;
            }
        }
        return true ;
    }
};