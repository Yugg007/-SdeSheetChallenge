#include <bits/stdc++.h> 
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    unordered_map<int, int>mp;
    pair<int, int>ans;
 for(int i : arr)
    {
        if (mp.find(i) == mp.end()){mp[i] = 1;}
        else{ans.second = i;}
    }
     
    for(int i = 1; i <= n; i++){
        if (mp.find(i) == mp.end()){ans.first = i; break;}
    }
    return ans;
	
}
