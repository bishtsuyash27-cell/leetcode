class Solution {
public:
bool canplace(vector<vector<char>>&board,int row , int col ,int num){
    //check in the row
    for(int i = 0 ; i<9 ; i++){
        if(board[i][col]-'0'==num){
            return false ;
        }

    }
    //check in the column 
    for(int  i  = 0 ;i<9 ; i++){
        if(board[row][i]-'0'==num){
            return false ;
        }
    }

    int x = (row/3)*3 ;
    int y = (col/3)*3 ;

    //chek in the sub-boxes 
    for(int i = x ; i<x+3 ; i++){
        for(int j = y ; j<y+3 ; j++){
            if(board[i][j]-'0'==num){
                return false ;
            }
        }
    }
    return true ;
}
bool f(vector<vector<char>>&board,int row , int col){
    if(row==9){
        return true ;
    }
    if(col==9){
        return f(board,row+1,0);
    }
    if(board[row][col]!='.'){
        return f(board,row,col+1);
    }

    for(int j = 1 ; j<=9 ; j++){
        if(canplace(board,row,col,j)){
            board[row][col] = '0'+j ;
           bool retval =  f(board,row,col+1);
           if(retval==true){
            return true ;
           }
            board[row][col] = '.';
        }
        
    }
    return false ;

}
    void solveSudoku(vector<vector<char>>& board) {
        f(board,0,0);
        return ;
    }
};