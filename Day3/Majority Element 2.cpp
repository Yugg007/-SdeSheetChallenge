#include <bits/stdc++.h> 
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map<int, int>mp;
    int n = arr.size(), lim = n/3;
    vector<int>ans;
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second > lim){
            ans.push_back(it.first);
        }
    }
    return ans;

}