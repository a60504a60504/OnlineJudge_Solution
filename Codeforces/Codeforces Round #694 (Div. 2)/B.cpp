#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

long long func(long long a[], long long x, int n) {
	long long ans=0;
	bool diviable=true;
	vector<long long> temp, tempX;
	for (int i=0;i<n;i++) {
		ans+=a[i];
		if (diviable&&a[i]%x==0) {
			temp.push_back(a[i]/x);
			tempX.push_back(x);
		}
		else diviable=false;
	}
	for (int i=0;i<temp.size();i++) {
		ans+=temp[i]*tempX[i];
		if (diviable&&temp[i]%x==0) {
			temp.push_back(temp[i]/x);
			tempX.push_back(tempX[i]*x);
		}
		else diviable=false;
	}
	return ans;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
		int n;
		long long x;
		cin >> n>> x;
		long long a[n];
		long long ans;
		for (int i=0;i<n;i++) cin >> a[i];
		ans = func(a,x,n);
		cout << ans<< endl;
    }
    
    return 0;
}