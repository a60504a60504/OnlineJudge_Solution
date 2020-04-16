    #include <bits/stdc++.h>
    #define endl "\n"
    using namespace std;
     
    int main () {
        int T;
        cin >> T;
        for (int i=0;i<T;i++) {
            int n;
            cin >> n;
            int p[n], c[n];
            bool flag=true;
            for (int j=0;j<n;j++) {
                cin >> p[j] >> c[j];
                if (p[j]<c[j]) flag=false;
            }
            for (int j=1;j<n;j++) {
                if (p[j]<p[j-1]) {
                    flag=false;
                    break;
                }
                if (c[j]<c[j-1]) {
                    flag=false;
                    break;
                }
                if ((p[j]-p[j-1])<(c[j]-c[j-1])) {
                    flag=false;
                    break;
                }
            }
            if (flag) cout << "YES"<<endl;
            else cout << "NO"<<endl;
        }
        return 0;
    }