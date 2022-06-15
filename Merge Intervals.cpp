#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
using namespace std;
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        int prev_x =intervals[0][0];
        int prev_y = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++){
            if(prev_y >= intervals[i][0]){
                prev_x = min(prev_x, intervals[i][0]);
                prev_y = max(prev_y, intervals[i][1]);
            }else {
                result.push_back({prev_x, prev_y});
                prev_x = intervals[i][0];
                prev_y = intervals[i][1];
            }
        }
        result.push_back({prev_x, prev_y});
        return result;
}
