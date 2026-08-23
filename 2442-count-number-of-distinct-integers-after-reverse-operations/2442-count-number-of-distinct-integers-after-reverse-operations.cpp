class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> ans ;

    unordered_set<int> s ;
        for(int i = 0 ; i<nums.size();i++){
            int n = nums[i];
            int rev = 0 ;

            while(n>0){
                rev = rev*10 + n%10 ;
                n = n/10 ;
            }
            ans.push_back(rev);

        }

        for(int i = 0 ; i<nums.size();i++){
            s.insert(nums[i]);
        }

        for(int j = 0 ; j<ans.size();j++){
            s.insert(ans[j]);
        }
        return s.size();
    }

};