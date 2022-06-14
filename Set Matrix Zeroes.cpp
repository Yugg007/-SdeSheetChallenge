#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
	queue<pair<int, int>>q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                q.push({i,j});
            }            
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < m; i++){
            matrix[x][i] = 0;
        }
        for(int i = 0; i < n; i++){
            matrix[i][y] = 0;
        }
    }
    return ;
}