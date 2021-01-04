#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

long long func(long long a[], int n) {
    long long sum_a[n];
    long long max=0;
    for (int i=0;i<n;i++) sum_a[i]=0;
    for (int i=n-1;i>=0;i--) {
        if (i+a[i]<n) sum_a[i]=a[i]+sum_a[a[i]+i];
        else sum_a[i]=a[i];
        if (sum_a[i]>max) max=sum_a[i];
    }
    return max;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long ans;
        cin >> n;
        long long a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        ans = func(a, n);
        cout << ans<< endl;
    }
    
    return 0;
}