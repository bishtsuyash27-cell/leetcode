class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans ;

    unordered_set<int> s ;
    int n = nums.size();
        for(int i = 0 ; i<n;i++){
            int n = nums[i];
            int rev = 0 ;

            while(n>0){
                rev = rev*10 + n%10 ;
                n = n/10 ;
            }
            nums.push_back(rev);

        }

        for(int i = 0 ; i<nums.size();i++){
            s.insert(nums[i]);
        }

        
        return s.size();
    }

};