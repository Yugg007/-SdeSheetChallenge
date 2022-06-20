#include <bits/stdc++.h>
using namespace std;
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    vector<vector<int>>meet;
    int n = start.size();
    for(int i = 0; i < n; i++){
        meet.push_back({end[i], i});
    }
    sort(meet.begin(), meet.end());
    vector<int> ans;
    int limit = meet[0][0];
    ans.push_back(meet[0][1] + 1);
    for(int i = 1; i < n; i++){
        if(limit < start[meet[i][1]]){
            limit = meet[i][0];
            ans.push_back(meet[i][1]+1);
        }
    }

    return ans;
}