#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main () {
    int t;
    cin >> t;
    while (t!=0) {
        int x,n,m;
        cin >> x>> n>> m;
        if (x-m*10<=0)
            x -= m*10;
        else {
            while (n!=0) {
                x/=2;
                x+=10;
                n--;
            }
            x -= m*10;
        }
        if (x>0) cout <<"NO"<< endl;
        else cout << "YES"<< endl;
        t--;
    }
    return 0;
}