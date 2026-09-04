class Solution {
public:
int rev(int n ){
    int reverse = 0;
    while(n>0){
        int r = n%10 ;
        reverse = (reverse*10)+r ;
        n = n/10;
    }
    return reverse ;
}
    int countNicePairs(vector<int>& nums) {
        int answer = 0 ;
        unordered_map<long long ,long long >mp ;

        for(int i = 0 ; i<nums.size();i++){
           long long key = (long long)nums[i] - (long long)rev(nums[i]);
            answer+=mp[key];
            mp[key]++;
        }
        return answer%1000000007 ;
    }
};