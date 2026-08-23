class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s ;
        for(int i = 0 ; i<nums.size(); i++){
            int rev = 0 ;
            int n = nums[i];

            while(n>0){
                rev = rev * 10 + n%10 ;
                 n = n /10 ;
            }
            s.insert(nums[i]);
            s.insert(rev);       

        }
        return s.size();
    }

};