class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>remainder(k,0);

        for(int i = 0 ;i<arr.size();i++){
            int rem = arr[i]%k ;
            if(rem<0){
                rem = rem + k ;
            }
            remainder[rem]++;
        }
    for(int i = 0 ; i<remainder.size();i++){
        int required = (k-i)% k ;
        if(i==required){
            if(remainder[required]%2!=0){
                return false ;
            }
        }
        else{
        if(remainder[i]!=remainder[required]){
            return false ;
        }
        }
    }

        return true ;
    }
};