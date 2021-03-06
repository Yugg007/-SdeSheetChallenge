#include <bits/stdc++.h>
using namespace std;
int search(int* arr, int n, int key) {
    // Write your code here.
  int lo = 0, hi = n - 1;

  while (lo <= hi) {
    int mid = (lo + hi) >> 1; 
    if (arr[mid] == key){return mid;} 

    if (arr[lo] <= arr[mid]) { 
      if (arr[lo] <= key && arr[mid] >= key){hi = mid - 1;}
      else{lo = mid + 1;} 
    }
    else{
        if (arr[mid] <= key && key <= arr[hi]){lo = mid + 1;}
        else{hi = mid - 1;}
    }
  }
  return -1;
}