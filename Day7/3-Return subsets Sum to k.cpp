#include <bits/stdc++.h>
using namespace std;
void solve(int idx, vector<int>& nums, vector<int>&temp, vector<vector<int>>& ans, int k)
{    
    if(idx == nums.size()){
        int sum = 0;
        for(int i = 0; i < temp.size(); i++){
            sum += temp[i];
        }
        if(sum == k){
            ans.push_back(temp);
        }
        return;
    }
    temp.push_back(nums[idx]);
    solve(idx+1, nums, temp, ans, k);
    temp.pop_back();
    solve(idx+1, nums, temp, ans, k);
    return;
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>temp;
    solve(0, arr, temp, ans, k);
    return ans;
    
}