#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main () {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        long long x[2],y[2];
        cin >> x[0]>> y[0]>> x[1]>> y[1];
        if (x[1]-x[0]==0||y[1]-y[0]==0) cout << abs(y[1]-y[0])+abs(x[1]-x[0])<< endl;
        else cout << abs(y[1]-y[0])+abs(x[1]-x[0])+2<< endl;
    }
    return 0;
}