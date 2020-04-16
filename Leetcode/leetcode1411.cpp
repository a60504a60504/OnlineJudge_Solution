#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    int numOfWays(int n) {
        long long c2=6,c3=6,c2_p=c2,c3_p=c3;
        int ans=c2+c3;
        for (int i=2;i<=n;i++) {
            c2=c2_p*3+c3_p*2;
            c3=c2_p*2+c3_p*2;
            c2_p=c2%(1000000007);
            c3_p=c3%(1000000007);
            ans = (c2+c3)%(1000000007);
        }
        return ans;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	int n, ans;
	
	while (cin >> n) {
		cout << s.numOfWays(n)<< endl;
	}
	
	return 0;
}