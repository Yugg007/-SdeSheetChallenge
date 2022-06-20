#include <bits/stdc++.h>
using namespace std;
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>> work;
    for(int i = 0; i < start.size(); i++){
        work.push_back({finish[i],start[i]});
    }
    sort(work.begin(), work.end());
    int activityCount = 1, last = work[0].first;
    for(int i = 1; i < work.size(); i++){
        if(work[i].second >= last){
            activityCount++;
            last = work[i].first;
        }
    }
    return activityCount;
}