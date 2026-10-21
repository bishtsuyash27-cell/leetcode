class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxproduct = nums[0];
        int ans = nums[0];
        int minproduct = nums[0];

        for(int i = 1 ; i<nums.size();i++){
            int p1 = nums[i];
            int p2 = nums[i] * maxproduct ;
            int p3 = nums[i] * minproduct ;

            maxproduct = max(p1, max(p2,p3));
            minproduct = min(p1,min(p2,p3));

            ans = max(maxproduct,ans);
        }
        return ans ;
    }
};