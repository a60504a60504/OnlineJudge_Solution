#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool func(long w, long h, long n) {
    long w_cont=1, h_cont=1;
    while (w%2==0) {
        w/=2;
        w_cont*=2;
    }
    while (h%2==0) {
        h/=2;
        h_cont*=2;
    }
    if (n>w_cont*h_cont) return false;
    else return true;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        long long w, h, n;
        bool ans;
        cin >> w>> h>> n;
        ans = func(w,h,n);
        if (ans) cout << "YES"<< endl;
        else cout << "NO"<< endl;
    }
    
    return 0;
}