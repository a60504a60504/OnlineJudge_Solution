#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string ans="1",temp;
        for (int i=1;i<n;i++) {
            int cnt = 0;
            temp = "";
            for (string::iterator it=ans.begin();it!=ans.end();++it) {
                if (it==ans.begin()||*(it-1)==*it) {
                    cnt += 1;
                }
                else {
                    temp.append(to_string(cnt)+*(it-1));
                    cnt = 1;
                }
            }
            temp.append(to_string(cnt)+*(ans.end()-1));
            ans = temp;
        }
        return ans;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	int input;
	
	while (cin >> input){
		cout << s.countAndSay(input) << endl;
	}
	
	return 0;
}