#include <bits/stdc++.h>
using namespace std;
int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);
    int platform = 1, ans = 1, i = 1, j = 0;
    while(i < n && j < n){
        if(at[i] <= dt[j]){
            platform++;
            i++;
        }
        else if(at[i] > dt[j]){
            platform--;
            j++;
        }
        ans = max(ans, platform);
    }
    return ans;
}