#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    long ans = 1, new_x = x;   
    while(n > 0){
        if(n % 2 == 0){
            new_x = ((new_x % m) * (new_x % m))%m;
            n = n>>1;
           } 
        else{
            ans = (ans * (new_x % m))%m;
            n = n-1;
        }
    }    
    return (int)(ans % m);
}