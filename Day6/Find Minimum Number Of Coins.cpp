#include <bits/stdc++.h>
using namespace std;
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>coin = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int coinRequired = 0;
    for(int i = coin.size()-1; i >= 0; i--){
        if(amount == 0){
            break;
        }
        if(amount >= coin[i]){
            coinRequired += (amount/coin[i]);
            amount %= coin[i];
        }
    }
    return coinRequired;
    
}
