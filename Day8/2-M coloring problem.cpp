#include <bits/stdc++.h>
using namespace std;
bool isSafe(int V, vector<vector<int>>&mat, vector<int>&color, int col){
    for(int i = 0; i < mat.size(); i++){
        if(i != V && mat[V][i] == 1 && color[i] == col){return false;}
    }
    return true;
}
bool solve(int V, int n, int m, vector<vector<int>>&mat, vector<int> &color){
    if(n == V){
        return true;
    }
    for(int i = 0; i < m; i++){
        if(isSafe(V, mat, color, i)){
            color[V] = i;
            if(solve(V+1, n, m, mat, color)){return true;}
            color[V] = -1;                
        }
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n = mat.size();
    vector<int>color(n, -1);
    if(solve(0, n, m, mat, color)){
        return "YES";
    } 
    return "NO";
}