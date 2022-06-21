#include <bits/stdc++.h>
using namespace std;
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    vector<int>ind;
    for(int i = 0; i < s.size(); i++){
        ind.push_back(i);
    }
    do{
        string S;
        for(int i = 0; i < ind.size(); i++){
            S.push_back(s[ind[i]]);
        }
        ans.push_back(S);
    }
    while(next_permutation(ind.begin(), ind.end()));
    return ans;
}