class Solution {
public:
int countbits(int x ){
    if(x==0){
        return 0 ;
    }
    return countbits(x/2) + (x%2);
}
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);

        for(int i = 0 ; i<=n ;i++){
            ans[i] = countbits(i);
        }
        return ans ;
    }
};