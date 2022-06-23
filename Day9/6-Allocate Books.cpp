#include <bits/stdc++.h>
using namespace std;
bool isPossible(long long int n, long long int m, long long int mid, vector<int> time){
    int days = 1;
    long long int chapters = 0;
    for (long long int i = 0; i<m; i++){
        if(time[i] + chapters <= mid){
            chapters = chapters + time[i];
        }
        else{
            days++;
            if(days > n || time[i] > mid){return false;}
            chapters = time[i];
       }
    }
   return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time){
    long long start = 0, ans, end, mid;
    end = accumulate(time.begin(), time.end(), 0ll);
    mid = (start + (end-start)/2);
    while(start <= end){
        if(isPossible(n, m, mid, time)){
            ans = mid;
            end = mid - 1;
        }
        else{start = mid + 1;}
        mid = (start + (end - start)/2);
    }
    return ans;
}