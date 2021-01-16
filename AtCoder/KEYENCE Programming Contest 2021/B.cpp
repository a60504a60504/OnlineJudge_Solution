#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int func(int a[], int N, int K) {
	int ans=0, map[N+1];
	for (int i=0;i<=N;i++) map[i]=0;
	for (int i=0;i<N;i++) map[a[i]]++;
	for (int i=0;map[i]!=0&&K!=0;) {
		map[i]--;
		ans++;
		i++;
		if (i>=N || map[i]==0) {
			i=0;
			K--;
		}
	}
	return ans;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N,K;
	cin >> N>> K;
	int a[N];
	int ans;
	for (int i=0;i<N;i++) cin >> a[i];
	ans = func(a,N,K);
	cout << ans<< endl;
    
    return 0;
}