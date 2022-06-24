#include <bits/stdc++.h>
using namespace std;
vector<int> minHeap(int n, vector<vector<int>>& queries) {
    // Write your code here.
    priority_queue<int, vector<int>, greater<int>>pq;
    vector<int>ans;
    for(auto query : queries){
        if(query[0] == 0){
            pq.push(query[1]);
        }
        else if(query[0] == 1){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    return ans;
}
