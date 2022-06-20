#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &arr, int n) {
	unordered_set<int>st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    return st.size();
}