class Solution {
public:
vector<int>dx = {-2,-2,-1,-1,1,1,2,2};
vector<int>dy = {-1,1,-2,2,-2,2,-1,1};
bool canplace(vector<vector<int>>&grid,int i , int j , int n , int count){
    if(i>=0 && i<n && j>=0 && j<n && grid[i][j]==count){
        return true ;
    }
    return false ;
}
bool f(vector<vector<int>>&grid,int i , int j , int n , int count ){
    if(count==n*n-1){
        return true ;
    }

    for(int k  = 0 ; k<8 ; k++){
        if(canplace(grid,i+dx[k],j+dy[k],n,count+1)){
            if(f(grid,i+dx[k],j+dy[k],n,count+1)){
                return true ;
            }
        }
       
    }
     return false;

}
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]!=0){
            return false ;
        }
        return f(grid,0,0,n,0);
    }
};