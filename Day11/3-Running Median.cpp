#include <bits/stdc++.h>
using namespace std;
void findMedian(int arr[], int n)
{
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int median;
    for(int i=0; i<n; i++){
        if(!maxHeap.empty() && maxHeap.top() > arr[i]){
            maxHeap.push(arr[i]);
            if(maxHeap.size() > minHeap.size() + 1){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
        }
        else{
            minHeap.push(arr[i]);
            if(minHeap.size() > maxHeap.size() + 1){    
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }      
        if((i+1)%2 == 1){    
            if(minHeap.size() > maxHeap.size()){
                median = minHeap.top();
            }
            else{
                median = maxHeap.top();
            }
        }
        else{
            median = (maxHeap.top() + minHeap.top())/2;
        }
        cout << median << " ";
    }
}

