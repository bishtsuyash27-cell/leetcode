class Solution {
public:
bool canplace(int row,int col,vector<vector<char>>&grid,int n ){
    //can place in the particular column ;
    //for checking the attack from the above row only 
    for(int i = row-1 ; i>=0;i--){
        if(grid[i][col]=='Q'){
            return false ;
        }
    }
    //for cheking the attack in the left diagnol 
    for(int i = row-1 ,  j = col-1 ; i>=0 && j>=0 ; i--,j-- ){
        if(grid[i][j]=='Q'){
            return false ;
        }
    }

    //for checking the attack from the right dignol 

    for(int i = row-1 , j = col+1; i>=0 && j<n;i--,j++){
        if(grid[i][j]=='Q'){
            return false ;
        }
    }
    return true ;
}
void solve(int n , int row,vector<vector<string>>&ans,vector<vector<char>>&grid){
    if(row==n){
        vector<string>temp ;
        for(int i = 0 ;i<grid.size();i++){
            string s = "";
            for(int j =  0 ; j<grid[0].size();j++){
                s+=grid[i][j];
            }
            temp.push_back(s);
        }
        ans.push_back(temp);
        return ;
    }

    for(int col = 0 ; col<n;col++){
        if(canplace(row,col,grid,n)){
            grid[row][col] = 'Q';
            solve(n,row+1,ans,grid);
            grid[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans ;
        vector<vector<char>> grid(n, vector<char>(n, '.'));
        solve(n,0,ans,grid);
        return ans ;
    }
};