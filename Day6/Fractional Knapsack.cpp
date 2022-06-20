#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b ){
   double r1 = (double)a.second/(double)a.first;
   double r2 = (double)b.second/(double)b.first;
   return r1 > r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(), items.end(), cmp);
    double profit = 0.0; 
    for(int i = 0; i < items.size(); i++){
       if(items[i].first <= w){
           profit += items[i].second;
           w -= items[i].first;
       }
       else{        
           profit += ((double)w/(double)items[i].first) * items[i].second;              break;
       }
   }
   return profit;
       
}