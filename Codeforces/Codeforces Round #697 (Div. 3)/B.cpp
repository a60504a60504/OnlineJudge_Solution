#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool func(long long n) {
	if (n/2020 >= n%2020) return true;
	return false;
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