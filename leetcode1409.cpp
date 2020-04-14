#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> P;
        vector<int> ans;
        for (int i=0;i<m;i++) P.push_back(i+1);
        for (vector<int>::iterator it_q=queries.begin();it_q!=queries.end();++it_q) {
            for (int pos=0;pos<m;pos++) {
                if (*it_q==P[pos]) {
                    P.erase(P.begin()+pos);
                    P.insert(P.begin(),*it_q);
                    ans.push_back(pos);
                    break;
                }
            }
        }
        return ans;
    }
};

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	string input_list;
	vector<int> queries, ans;
	int item, m;

/*
input: queries m (split with blank)
*/

	while (getline(cin,input_list)) {
		istringstream T(input_list);
		while (T >> item) queries.push_back(item);
		m = queries.back();
		queries.pop_back();
		ans = s.processQueries(queries,m);
		while (!ans.empty()){
			cout << ans.front() << " ";
			ans.erase(ans.begin());
		}
		cout << endl;
		queries.clear();
	}
	
	return 0;
}