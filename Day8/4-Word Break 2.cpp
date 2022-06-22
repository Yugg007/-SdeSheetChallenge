#include <bits/stdc++.h>
using namespace std;
unordered_map< string ,bool> m;
    vector< string> res;
void puzzle(string s, string x, string ans, int idx){
    if(idx == s.size()){
        ans.pop_back();
        res.push_back(ans);
    }
    for(int i=idx; i<s.length(); i++){
        x += s[i];
        if(m.find(x)!=m.end()){
            puzzle(s,"",ans+x+" ",i+1);
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary){
    for(string st:dictionary) m[st]=true;
    puzzle(s,"","",0);
    return res;
} 