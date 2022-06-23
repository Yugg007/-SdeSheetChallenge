#include <bits/stdc++.h>
using namespace std;
double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double error = 1e-7;
    double diff = 1e18;
    double currAns = 2;
    while(diff > error){
        double newAns = (pow(currAns, n) * (n-1) + m)/(n * pow(currAns, n-1));
        diff = abs(currAns - newAns);
        currAns = newAns;
  }
    return currAns;
    
}

int main(){
    int n;
    long long m;
    cin>>n>>m;
    cout<<findNthRootOfM(n, m);

}