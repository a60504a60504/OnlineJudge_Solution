#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void func(long long a[], long long b[], int N) {
	vector<long long> ans;
	long long amax=0,bmax=0,cmax=0;
	for (int b_i=1,a_i=1;b_i<=N;b_i++) {
		for (;a_i<=b_i;a_i++) {
			if (amax<a[a_i-1]) {
				amax=a[a_i-1];
				cmax = max(cmax,amax*b[b_i-1]);
			}
		}
		if (bmax<b[b_i-1]) {
			bmax=b[b_i-1];
			cmax = max(cmax,amax*bmax);
		}
		else {
			cmax = max(cmax,amax*b[b_i-1]);
		}
		cout << cmax<< endl;
	}
	return ;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
	cin >> N;
	long long a[N], b[N];
	for (int i=0;i<N;i++) cin >> a[i];
	for (int i=0;i<N;i++) cin >> b[i];
	func(a,b,N);
    
    return 0;
}