#include <bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int row = 0, col = 0, prev, cr;
   while(row < n && col < m){
       if(row + 1 == n || col + 1 == m){break;}
       prev=mat[row + 1][col];
       for (int i = col; i < m; i++){
           cr = mat[row][i];
           mat[row][i] = prev;
           prev = cr;
       }
       row++;
       for (int i = row; i < n; i++){
           cr = mat[i][m-1];
           mat[i][m-1] = prev;
           prev = cr;
       }
       m--;
       if (row < n){
           for (int i = m-1; i >= col; i--){
               cr = mat[n-1][i];
               mat[n-1][i] = prev;
               prev = cr;
           }
       }
       n--;
       if (col < m){
           for (int i = n-1; i >= row; i--){
               cr = mat[i][col];
               mat[i][col] = prev;
               prev = cr;
           }
       }
       col++;    
   }
    return;
}