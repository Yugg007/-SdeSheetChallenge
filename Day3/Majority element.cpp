#include <bits/stdc++.h> 
using namespace std;
int findMajorityElement(int arr[], int n) {
    int cnt = 1, majEle = arr[0];
    for(int i = 1; i < n; i++){
        if(majEle == arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt == 0){
            majEle = arr[i];
            cnt++;
        }

    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == majEle){
            cnt++;
        }
    }
    return (cnt > n/2)?majEle : -1;
}