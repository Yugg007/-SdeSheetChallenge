#include <bits/stdc++.h>
using namespace std;
bool canPlace(int mid, int c, vector<int>&pos){
    int currC = 1, idx = 0;
    for(int i = 1; i < pos.size(); i++){
        if(pos[i]-pos[idx] >= mid){
            idx = i;
            currC++;
        }        
    }
    return currC >= c;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(), positions.end());
    int lo = 0, hi = positions[n-1], res = 0;
    while(lo <= hi){
        int mid = lo + (hi-lo)/2;
        if(canPlace(mid, c, positions)){
            res = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    return res;
}