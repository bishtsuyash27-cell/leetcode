class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
vector<int>start ;
vector<int>end ;
        for(auto interval  : intervals){
            start.push_back(interval[0]);
            end.push_back(interval[1]);
        }

        sort(start.begin(),start.end());
        
        sort(end.begin(),end.end());
    int j = 0 ;
    int count = 0 ;
        for(int i = 0 ; i<n ; i++){
            

            while(j<end.size() && end[j]<start[i]){
                j++;
            }
    count += (i-j);

        }
        return count ;
    }
};