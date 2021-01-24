#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool func(string s) {
    if (s.size()%2==1 || s[0]==')' || s[s.size()-1]=='(') return false;
    return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    string s[t];
    for (int i=0;i<t;i++) {
        bool ans;
        cin >> s[i];
        ans = func(s[i]);
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}