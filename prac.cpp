#include <bits/stdc++.h>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>>pq;
    for(int i = 0; i < kArrays.size(); i++){
        pq.push({kArrays[i][0], i});
    }
    vector<int>idx(kArrays.size());
    vector<int>ans;
    while(!pq.empty()){
        ans.push_back(pq.top().first);
        int i = pq.top().second; 
        pq.pop();
        if(idx[i] + 1 < kArrays[i].size()){            
            pq.push({kArrays[i][idx[i]+1], i});
            idx[i]++;
        }
    }
    cout<<"ans- ";
    
    return ans;
    
}

int main(){
    vector<vector<int>>v1 = {{3, 5, 9},{1, 2, 3, 8}};
    vector<int>ans = mergeKSortedArrays(v1, 2);
    for(auto it : ans){
        cout<<it<<" ";
    }
}