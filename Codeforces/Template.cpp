#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> func(int a[], int b[], int N) {
	vector<int> ans;
	int max=0;
	for (int c=1;c<=N;c++) {
		for (int i=1;i<=c;i++) {
			for (int j=1;j<=i;j++) {
				
	}
	return ans;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
	cin >> N;
	int a[N], b[N];
	vector<int> ans;
	for (int i=0;i<N;i++) cin >> a[i];
	for (int i=0;i<N;i++) cin >> b[i];
	ans = func(a,b,N);
	for (int i=0;i<ans.size();i++) cout << ans[i]<< endl;
    
    return 0;
}