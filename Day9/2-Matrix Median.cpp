#include <bits/stdc++.h>
using namespace std;
int getMedian(vector<vector<int>> &matrix){
    int minEle = 1e5, maxEle = 1, n = matrix.size(), m = matrix[0].size();
    for (int i=0; i<n; i++){
        minEle = min(minEle, matrix[i][0]);
        maxEle = max(maxEle, matrix[i][m-1]);
    } 
    int partition = (n * m + 1) / 2;
    while (minEle < maxEle){
        int mid = minEle + (maxEle - minEle) / 2;
        int currPartition = 0;
        for (int i = 0; i < n; ++i){
            currPartition += (upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin());
        }
        if (currPartition < partition)
            minEle = mid + 1;
        else
            maxEle = mid;
    }
    return minEle;
}