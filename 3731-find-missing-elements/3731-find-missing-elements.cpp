class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n  = nums.size();
        int min = INT_MAX ;

        int max = INT_MIN  ;
        

        for(int i = 0 ; i<n; i++){
            if(nums[i]>max){
                max = nums[i];
            }
          if(nums[i]<min){
                min = nums[i];
            }
        }




        vector<int>ans ;

        for(int i = min ; i<=max ; i++){
bool flag = false ;
            for(int j = 0; j<n;j++){
                

                if(i==nums[j]){
                    flag = true ;
                    break ;
                }
               

            }
             if(flag==false){
                    ans.push_back(i);
                }
        }
        return ans ;

    }
};