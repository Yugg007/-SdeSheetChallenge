#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   int cnt0 = 0, cnt1 = 0, cnt2 = 0;
   for(int i = 0; i < n; i++){
       if(arr[i] == 0){cnt0++;}
       if(arr[i] == 1){cnt1++;}
       if(arr[i] == 2){cnt2++;}
   }
    int i = 0;
    while(cnt0--){
        arr[i++] = 0;
    }
    while(cnt1--){
        arr[i++] = 1;
    }
    while(cnt2--){
        arr[i++] = 2;
    }
    return;
}