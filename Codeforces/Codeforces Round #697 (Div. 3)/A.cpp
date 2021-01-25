#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool func(long long n) {
	bool ans=false;
	while (n>2) {
		if (n&1) return true;
		n >>= 1;
	}
	
	return ans;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (func(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    
    return 0;
}