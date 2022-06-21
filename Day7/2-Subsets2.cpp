#include <bits/stdc++.h>
using namespace std;
void solve(int idx, vector<int>& nums, vector<int>&temp, vector<vector<int>>& ans){     
    ans.push_back(temp);
    for(int i=idx; i<nums.size(); i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        solve(i+1, nums, temp, ans);
        temp.pop_back();
   }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &nums)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    vector<int>temp;
    solve(0, nums, temp, ans);
    return ans;
}
