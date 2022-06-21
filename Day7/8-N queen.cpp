#include <bits/stdc++.h>
using namespace std;
void getSolution(vector<vector<int>> &board, int n, vector<vector<int>> &ans) {
    vector<int>curr;
    for (auto rowEle: board) {
        for (auto colEle: rowEle) {
            curr.push_back(colEle);
        }
    }
    ans.push_back(curr);
    return;
}
bool isSafe(vector<vector<int>> &board, int row, int col, int n) {    
    int currRow = row, currCol = col;
    for (currCol = 0; currCol < col; currCol++) {
        if (board[row][currCol]) {
            return false;
        }
    }
    for(currRow = row, currCol = col; currRow >= 0 && currCol >= 0; currRow--, currCol--) {
        if (board[currRow][currCol]) {
            return false;
        }
    }
    for(currRow = row, currCol = col; currCol >= 0 && currRow < n; currRow++, currCol--) {
        if (board[currRow][currCol]) {
            return false;
        }
    }
    return true;
}
void solve(vector<vector<int>> &board, int col, int n, vector<vector<int>> &ans){
    if (col >= n) {
        getSolution(board, n, ans);
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[i][col] = 1;
            solve(board, col + 1, n, ans);
            board[i][col] = 0;
        }
    }
    return;
}
vector < vector < int >> solveNQueens(int n) {
    vector < vector < int >> board(n, vector < int > (n, 0));
    vector < vector < int >> ans;
    solve(board, 0, n, ans);
    return ans;
}