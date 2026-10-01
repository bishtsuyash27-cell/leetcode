class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        vector<int>start ;
        vector<int> end ;
        for(int i = 0 ; i<intervals.size();i++){
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);

        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        long long  count = 0 ;
        int j = 0 ;
        for(int i = 0 ; i<start.size(); i++){
            
            while(j<end.size()&& end[j]<start[i]){
                j++;
            }

            count +=(i - j) ;

        }

return count ;

    }
};