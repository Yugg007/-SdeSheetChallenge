#include <bits/stdc++.h> 
using namespace std;
int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    vector<int>xorrArray(n);
    xorrArray[0] = arr[0];
    for(int i = 1; i < n; i++){
        xorrArray[i] = xorrArray[i-1] ^ arr[i];
    }
    unordered_map<int, int>mp;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int tempXorr = x ^ xorrArray[i];
        ans += (1ll * mp[tempXorr]);
        mp[xorrArray[i]]++;
        if(xorrArray[i] == x){
            ans++;
        }
    }
    return ans;
}