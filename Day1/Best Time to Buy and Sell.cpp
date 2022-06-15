#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    stack<long long>st;
    long long n = prices.size(), maxPro = 0;
    st.push(prices[n-1]);
    for(int i = n-2; i >= 0; i--){
        while(!st.empty() && st.top() < prices[i]){
            st.pop();
        }
        if(!st.empty()){
            maxPro = max(maxPro, st.top()-prices[i]);
            if(st.top() < prices[i])st.push(prices[i]);
        }
        else{
            st.push(prices[i]);
        }
        
    }
    return maxPro;
}