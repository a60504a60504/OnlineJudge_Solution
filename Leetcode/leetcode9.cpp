#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int y = 0, rev_x, rev_y;
        if (x<0) return false;
        if (x<10) return true;
        y = x%10;
        rev_y = y;
        x /= 10;
        rev_x = x;
        while (rev_x >= 10) {
            rev_y = rev_y*10 + rev_x%10;
            rev_x /= 10;
        }
        if (rev_x==y && rev_y==x) return true;
        else return false;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	int x;
	while (cin >> x)
		cout << s.isPalindrome(x)<<endl;
	
	return 0;
}