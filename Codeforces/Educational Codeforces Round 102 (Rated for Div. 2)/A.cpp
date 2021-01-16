#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool func(int a[], int d, int n) {
	bool ans=true;
	sort(a,a+n);
	for (int i=0;i<n;i++) 
		if (a[i]>d) {
			ans=false; 
			break;
		}
	if (ans==false && a[0]+a[1]<=d) ans=true;
	return ans;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
		int n, d;
		bool ans;
		cin >> n>> d;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		ans = func(a,d,n);
		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
    }
    
    return 0;
}