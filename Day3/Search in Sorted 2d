#include <bits/stdc++.h>
using namespace std;

bool findTargetInMatrix(vector < vector < int >> & mat, int n, int m, int target) {
    int low = 0, high = n*m-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(mat[mid/m][mid%m] == target){
            return true;
        }
        else if(mat[mid/m][mid%m] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
        
}