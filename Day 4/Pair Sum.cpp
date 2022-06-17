#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr, int s){
    int n = arr.size();
    if(n == 1){
        return {{}};
    }
    if(n == 2 && arr[0]+arr[1] != s){
        return {{}};
    }
    sort(arr.begin(), arr.end());
    unordered_map<int, int>mp;
    vector<vector<int>>ans;
    for(int i = 0; i < n; i++){
        if(mp.find(s-arr[i]) != mp.end()){
            int cnt = mp[s-arr[i]];
            while(cnt--){ 
                vector<int>v  = {s-arr[i],arr[i]};
                ans.push_back(v);
            }
        }
        mp[arr[i]]++;
    }
    sort(ans.begin(), ans.end());
    return ans;
    
}