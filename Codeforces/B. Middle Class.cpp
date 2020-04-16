    #include <bits/stdc++.h>
    #define endl "\n"
    using namespace std;
     
    long long MiddleClass (int n, long long x, long long a[10001]) {
        long long ans = 0, cnt = 0;
        sort(a,a+n);
        for (int i=n-1;i>=0;i--) {
            ans += a[i];
            if (ans < 0) break;
            cnt++;
        }
        return cnt;
    }
     
    int main () {
        int T;
        cin >> T;
        for (int i=0;i<T;i++) {
            int n;
            long long x;
            cin >> n >> x;
            long long a[n];
            for (int j=0;j<n;j++) {
                cin >> a[j];
                a[j] -= x;
            }
            cout << MiddleClass(n,x,a) << endl;
        }
        return 0;
    }