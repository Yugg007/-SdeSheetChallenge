#include <bits/stdc++.h>
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