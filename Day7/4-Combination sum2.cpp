#include <bit/stdc++.h>
using namespace std;
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    for(int i = 0; i < (1 << n); i++){
        vector<int> temp;
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                temp.push_back(arr[j]);
                sum += arr[j];
            }
        }
        if(sum == target){
            result.push_back(temp);
        }
    }
    sort(result.begin(), result.end());
    result.resize(unique(result.begin(), result.end()) - result.begin());  
    return result;
}


//Approach - 2
void solve(int idx, int target, vector<int>&temp, vector<int>&num, vector<vector<int>>&ans){
    if(target == 0){
        ans.push_back(temp);
        return;
    }
    if(idx >= num.size()){
        return ;
    }
    for(int i = idx; i < num.size(); i++){
        if(i > idx && num[i] == num[i-1]){continue;}
        if(num[i] > target){break;}
        temp.push_back(num[i]);
        solve(i+1, target-num[i], temp, num, ans);
        temp.pop_back();
    }
    return;
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    sort(arr.begin(), arr.end());
    vector<int>temp;
    vector<vector<int>> ans;
    solve(0, target, temp, arr, ans);
    return ans;
}
