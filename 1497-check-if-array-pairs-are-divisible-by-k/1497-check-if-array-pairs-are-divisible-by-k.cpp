class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp ;
        for(int i = 0 ;i<arr.size();i++){
            int rem = arr[i]%k;
        if(rem<0){
            rem+=k ;
        }
            mp[rem]++;
        }

        for(auto x : mp){
            int rem = x.first ;
            int required = (k-rem)%k ;

            if(rem==required){
                if(mp[rem]%2!=0){
                    return false ;
                }
            }
            if(mp[rem]!=mp[required]){
                return false ;
            }

        }
return true ;
    }
};