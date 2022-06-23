#include <bits/stdc++.h>
using namespace std;
int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    int lo = 0, hi = n-2;
    while(lo <= hi){
        int mid = (hi+lo)/2;
        if((mid%2) == 0){
            if(arr[mid] == arr[mid+1]){
                lo = mid+1;
            }
            else{
                hi = mid -1;
            }
        }
        else{
            if(arr[mid] == arr[mid+1]){
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
    }
    return arr[lo];
}
