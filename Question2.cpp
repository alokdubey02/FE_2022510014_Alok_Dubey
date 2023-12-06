//sudoku
#include<bits/stdc++.h>
using namespace std;

void printBoard(int board[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<"";
        }
        cout<<endl;
    }

}

bool isSafe(int board[9][9],int row,int col, int i){
    for(int g=0;g<9;g++){
        if(board[row][g]==i || board[g][col]==i){
            return false;
        }
    }
    int sRow=row-row%3;
    int sCol=col-col%3;
    for(int m=0;m<3;m++)
        for(int n=0;n<3;n++){
            if(board[m+sRow][n+sCol]==i)
                return false;
        }
    return true;
}

bool solve(int board[9][9]){
    int row,col;
    bool isempty=false;
    for(row=0;row<9;row++){
        for(col=0;col<9;col++){
            if(board[row][col]==0){
                isempty=true;
                break;
            }
            
        }
    }
    if(isempty)
                return true;
    for(int i=1;i<=9;i++){
        if(isSafe(board,row,col,i)){
            board[row][col]=i;
            if(solve(board))
                return true;
            board[row][col]=0;
        }
    }
    return false;
}


int main(){
    int board[9][9]={{5,3,0,0,7,0,0,0,0},{6,0,0,1,9,5,0,0,0},{0,9,8,0,0,0,0,6,0},{8,0,0,0,6,0,0,0,3},{4,0,0,8,0,3,0,0,1},{7,0,0,0,2,0,0,0,6},{0,6,0,0,0,0,2,8,0},{0,0,0,4,1,9,0,0,5},{0,0,0,0,8,0,0,7,9}};
    if(solve(board))
        printBoard(board);
    else
        cout<<"No solution exists"<<endl;
    return 0;
}