class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>pre(n,0);
        pre[0] = nums[0];

        for(int i = 1 ; i<n;i++){
            pre[i]  = pre[i-1]+nums[i];
        }
        int count = 0 ;

        unordered_map<int,int>mp ;

        for(int i = 0 ; i<n ; i++){
            if(pre[i]==k){
                count++;
            }
        
                int key = pre[i] - k;
            if(mp.find(key)!=mp.end()){
                count+=mp[key];
            }     
            mp[pre[i]]++;       
        }
        return count ;
    }
};