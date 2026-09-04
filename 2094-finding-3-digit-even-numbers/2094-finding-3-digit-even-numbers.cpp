class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int>mp ;

        for(int ele : digits){
            mp[ele]++;
        }
        vector<int>ans ;
        for(int i = 100 ; i<=998;i+=2){
            int a = i/100 ;
            int b = (i/10)%10;
            int c = i%10 ;
            
            if(mp.find(a)!=mp.end()){
                mp[a]--;

                if(mp[a]==0) mp.erase(a);
                
                if(mp.find(b)!=mp.end()){
                    mp[b]--;

                    if(mp[b]==0) mp.erase(b);

                    if(mp.find(c)!=mp.end()){
                        ans.push_back(i);
                    }
                    mp[b]++;
                }
                mp[a]++;
            }
        }
        return ans ;
    }
};