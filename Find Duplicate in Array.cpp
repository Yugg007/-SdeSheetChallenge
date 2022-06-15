#include <bits/stdc++.h> 
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	unordered_map<int, int>mp;
    for(int i = 0; i < n; i++){
        if(mp.find(arr[i]) != mp.end()){
            return arr[i];
        }
        mp[arr[i]]++;
    }
    return 0;
}
