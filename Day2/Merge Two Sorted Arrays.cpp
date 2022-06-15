#include <bits/stdc++.h> 
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	vector<int>ans;
    int i = 0, j = 0;
    while(i < n && j < m && arr1[i] != 0){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i++]);
            ans.push_back(arr2[j++]);            
        }
        else if(arr1[i] > arr2[j]){
            ans.push_back(arr2[j++]);
        }
        else{
            ans.push_back(arr1[i++]);
        }
    }
    if(arr1[i] == 0){
        while(j < m){
           ans.push_back(arr2[j++]);            
        }
    }
    while(i < n && arr1[i] != 0){
        ans.push_back(arr1[i++]);
    }
    return ans;
}