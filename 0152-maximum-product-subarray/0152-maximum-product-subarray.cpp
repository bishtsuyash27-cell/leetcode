class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maximum_product = INT_MIN ;

        for(int i = 0 ; i<n ; i++){
            int maxi = 1 ;
            for(int j = i ; j<n ; j++){
                maxi *= nums[j];
                maximum_product = max(maxi,maximum_product);
            }
            
        }
        return maximum_product ;
    }
};