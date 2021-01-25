#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> func(int a[], int b[], int N) {
	vector<int> ans;
	
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