#include <bits/stdc++.h> 
using namespace std;
int uniquePaths(int n, int m) {
	if(n == 0 || m == 0){
        return 0;
    }
    if(n == 1 || m == 1){
        return 1;
    }
    vector<vector<int>>grid(n, vector<int>(m, 1));
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }
    return grid[n-1][m-1];
}