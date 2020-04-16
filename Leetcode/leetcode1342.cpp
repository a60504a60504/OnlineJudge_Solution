#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    int numberOfSteps (int num) {
        int cnt = 0;
        while (num>0) {
            if (num%2==0) num/=2;
            else num-=1;
            cnt++;
        }
        return cnt;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	int input;
	
	while (cin >> input){
		cout << s.numberOfSteps(input) << endl;
	}
	
	return 0;
}