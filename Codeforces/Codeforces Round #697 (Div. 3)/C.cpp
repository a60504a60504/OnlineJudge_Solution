#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

ll func(ll a, ll b, ll k, ll *A, ll *B) {
	ll ans=k*(k-1)/2;
	for (int ki=0;ki<k;ki++) 
		for (int kj=ki+1;kj<k;kj++) 
			if (A[ki]==A[kj]) ans--;
	for (int ki=0;ki<k;ki++) 
		for (int kj=ki+1;kj<k;kj++) 
			if (B[ki]==B[kj]) ans--;
	return ans;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
	cin >> t;
	while (t--) {
		ll a, b, k;
		cin >> a >> b >> k;
		ll A[k], B[k];
		for (int i=0;i<k;i++) cin >> A[i];
		for (int i=0;i<k;i++) cin >> B[i];
		cout << func(a,b,k,A,B) << endl;
	}
    
    return 0;
}