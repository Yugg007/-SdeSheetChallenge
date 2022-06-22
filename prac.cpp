#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void solve(int i, int j, vector<vector<int>>&maze, int n, vector<vector<int>>&vis){
    if(i<0 || j<0 || i>=n || j>=n) return;
    if (maze[i][j] == 0 || vis[i][j] == 1) return;
    if(i == n-1 && j == n-1) {
        vis[i][j] = 1;
        vector<int>curr;
        for(int r = 0; r<n; r++){
            for(int c=0; c<n; c++) {
                curr.push_back(vis[r][c]);
            }
        }
        ans.push_back(curr);
        vis[i][j] = 0;
        return;
    }
    vis[i][j] = 1;
    solve(i-1, j, maze, n, vis);
    solve(i+1, j, maze, n, vis);
    solve(i, j-1, maze, n, vis);
    solve(i, j+1, maze, n, vis);

}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
    vector<vector<int>>vis(n, vector<int>(n, 0));
    if(maze[0][0] == 0 || maze[n-1][n-1] == 0) return ans;
    solve(0, 0, maze, n, vis);
    return ans;
}
int main(){
    vector<vector<int>>maze = {
{1, 1},
{0, 1}
    };
    vector<vector<int>>res = ratInAMaze(maze, maze.size());
    for(auto it : res){
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}