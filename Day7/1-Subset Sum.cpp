#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums, int sum, vector<int>&ans, int idx){
    if(idx == nums.size()){
        ans.push_back(sum);
        return ;
    }
    solve(nums, sum+nums[idx], ans, idx+1);
    solve(nums, sum, ans, idx+1);
    return ;
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int>ans;
    solve(num, 0, ans, 0);
    sort(ans.begin(), ans.end());
    return ans;
}