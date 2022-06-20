#include <bits/stdc++.h> 
using namespace std;
int longestSubSeg(vector<int> &nums , int n, int k){
    // Write your code here.
         int max1 = 0, maxL = 0, start = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]==1){
            max1++;
            }
            if(i - start + 1 - max1 > k){
                if(nums[start]==1){
                    max1--;
                }
                start++;
            }
            maxL=max(maxL,i-start+1);
        }
        return maxL;
}
