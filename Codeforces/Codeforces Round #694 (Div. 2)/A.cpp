#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<long long> func(long long a[], long long x, int n) {
	vector<long long> ans;
	long long min_sum=0, min_remain=0, max_sum=0;
	for (int i=0;i<n;i++) {
		long long remain = a[i]%x;
		long long qus = a[i]/x;
		min_sum += qus;
		if (remain!=0) {
			max_sum += qus+1;
			min_remain += remain;
			if (min_remain/x>0) {
				min_sum += min_remain/x;
				min_remain = min_remain%x;
			}
		}
		else max_sum += qus;
	}
	if (min_remain!=0) min_sum+=1;
	ans.push_back(min_sum);
	ans.push_back(max_sum);
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
		vector<long long> ans;
		for (int i=0;i<n;i++) cin >> a[i];
		ans = func(a,x,n);
		for (int i=0;i<2;i++) cout << ans[i]<< " ";
		cout << endl;
    }
    
    return 0;
}