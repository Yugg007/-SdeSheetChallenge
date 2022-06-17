#include <bits/stdc++.h> 
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int>st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    int ans = 1;
    for(int i = 0; i < n; i++){
        int prevEle = arr[i] - 1;
        if(st.find(prevEle) == st.end()){
            int len = arr[i];
            while(st.find(++len) != st.end());
            ans = max(ans, len-arr[i]);
        }
    }
    return ans;
}