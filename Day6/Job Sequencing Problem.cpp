#include<bits/stdc++.h>
using namespace std;
struct Jobs{
   int deadline;
   int profit;
};
bool static comparator(struct Jobs f1, Jobs f2){
   return f1.profit > f2.profit;
}
int jobScheduling(vector<vector<int>> &jobs){
   int n = jobs.size();
   struct Jobs job[n];
   for(int i=0;i<n;i++){
       job[i].deadline = jobs[i][0];
       job[i].profit = jobs[i][1];
   }
   sort(job,job+n,comparator);
   int maxi = 0;
   for(int i = 0; i < n; i++){
       maxi = max(maxi, job[i].deadline);
   }
   vector<int> taken(maxi+1, -1);
   int jobProfit = 0;
   for (int i = 0; i < n; i++) {
        for (int j = job[i].deadline; j > 0; j--) {
           if (taken[j] == -1) {
              taken[j] = 0;
              jobProfit += job[i].profit;
              break;
           }
        }
     }
   return jobProfit;
}