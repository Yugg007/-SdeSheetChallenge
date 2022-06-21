#include <bits/stdc++.h>
using namespace std;
bool dp[16][16];
void solve(int idx, string s, vector<string>&temp, vector<vector<string>>&ans){
    if(idx >= s.size()){
        ans.push_back(temp);
        return;
    }
    for(int i = idx; i < s.size(); i++){
        if(dp[idx][i]){
            temp.push_back(s.substr(idx, i-idx+1));
            solve(i+1, s, temp, ans);
            temp.pop_back();
        }
    }
    return;
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    int n = s.size();
    memset(dp, false, sizeof(dp));
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(s[i] == s[j] && (i < j + 2 || dp[j+1][i-1]) ){
                dp[j][i] = true;
            }
        }        
    }
    vector<string>temp;
    vector<vector<string>>ans;
    solve(0, s, temp, ans);
    return ans;
}