#include <bits/stdc++.h> 
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    if(n < 4){
        return "No";
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n-3; i++){
        for(int j = i+1; j < n-2; j++){
            int low = j+1, high = n-1;
            int newTarget = target - arr[i] - arr[j];
            while(low < high){
                if(arr[low]+arr[high] == newTarget){
                    return "Yes";
                }
                if(arr[low]+arr[high] > newTarget){
                    high--;
                }
                else{
                    low++;
                }
            }
        }
    }
    return  "No";
}
