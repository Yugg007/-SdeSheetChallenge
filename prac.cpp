#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "avfvga";
    bool dp[7][7] = {false};
    for(int i = 0; i < 7; i++){
        for(int j = 0; j <= i; j++){
            if(s[i] == s[j] && (i < j + 2 || dp[j+1][i-1]) ){
                dp[j][i] = true;
            }
        }        
    }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}