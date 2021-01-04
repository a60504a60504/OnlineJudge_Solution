#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int func(long long a[], int n) {
    long long A_sum=0, B_sum=0;
    sort(a,a+n,greater<long long>());
    for (int i=0;i<n;i++) {
        if ((i&1)==0 && (a[i]&1)==0) A_sum+=a[i];
        else if((i&1)==1 && (a[i]&1)==1) B_sum+=a[i];
    }
    if (A_sum>B_sum) return 1;
    else if(A_sum<B_sum) return 2;
    return 3;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        int ans;
        cin >> n;
        long long a[n];
        for (int i=0;i<n;i++) cin >> a[i];
        ans = func(a, n);
        if (ans==1) cout << "Alice"<< endl;
        else if (ans==2) cout << "Bob"<< endl;
        else if (ans==3) cout << "Tie"<< endl;
    }
    
    return 0;
}