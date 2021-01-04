#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
bool checkOneway(int n, char *s) {
    bool loop=true;
    for (int j=0;j<n;j++) {
        if (s[j]=='<') {
            for (int k=j+1;k<n;k++) {
                if (s[k]=='>') {
                    loop = false;
                    break;
                }
            }
            break;
        }
        else if (s[j]=='>') {
            for (int k=j+1;k<n;k++) {
                if (s[k]=='<') {
                    loop = false;
                    break;
                }
            }
            break;
        }
    }
    return loop;
}
bool checkLoop(char i, char i_1, bool loop) {
    if (i==i_1 && i=='>' && loop) return true;
    else if (i==i_1 && i=='<' && loop) return true;
    else if (i=='-' || i_1=='-') return true;
    return false;
}
int main () {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n, sum=0;
        cin >> n;
        char s[n];
        bool loop;
        for (int j=0;j<n;j++) cin >> s[j];
        loop = checkOneway(n,s);
        
        if (checkLoop(s[0],s[n-1],loop)) sum++;
        for (int j=1;j<n;j++) {
            if (checkLoop(s[j],s[j-1],loop)) sum++;
        }
        cout << sum<< endl;
    }
    return 0;
}