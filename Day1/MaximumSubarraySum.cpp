#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
  
  long long ans = arr[0], sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    ans = max(ans, sum);
    if (sum < 0) {
      sum = 0;
    }
  }

  return ans< 0? 0 : ans;
}
int main(){
    int n;
    cin>>n;
    int v[15];
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v[i] = (x);
    }
    cout<<maxSubarraySum(v, 15);
}

//-7 -8 -16 -4 -8 -5 -7 -11 -10 -12 -4 -6 -4 -16 -10 
