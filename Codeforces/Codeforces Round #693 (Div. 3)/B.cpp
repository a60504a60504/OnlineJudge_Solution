#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool func(int a[], int n) {
    int sum=0, c1=0, c2=0;
    for (int i=0;i<n;i++) {
        sum+=a[i];
        if (a[i]==1) c1++;
        else c2++;
    }
    if (sum%2!=0) return false;
    if (c2%2==0) return true;
    if (c1>0) return true;
    return false;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        bool ans;
        cin >> n;
        int a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        ans = func(a, n);
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}