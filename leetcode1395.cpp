#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int ans = 0;
        for (std::vector<int>::iterator i=rating.begin();i!=rating.end()-2;++i){
            for (std::vector<int>::iterator j=i+1;j!=rating.end()-1;++j){
                for (std::vector<int>::iterator k=j+1;k!=rating.end();++k){
                    if ((*i<*j&&*j<*k)||(*i>*j&&*j>*k)) ans++;
                }
            }
        }
        return ans;
    }
};


vector<int> string2vector(string input_list) {
	vector<int> ans;
	int item;
	istringstream T(input_list);
	while (T >> item) ans.push_back(item);
	return ans;
}

int main () {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	Solution s;
	string input_list;
	
	while (getline(cin,input_list)) {
		vector<int> rating;
		int ans;
		rating = string2vector(input_list);
		ans = s.numTeams(rating);
		cout << ans << endl;
	}
	
	return 0;
}