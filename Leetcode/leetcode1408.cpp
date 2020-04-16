#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for (vector<string>::iterator word1=words.begin();word1!=words.end();++word1) {
            for (vector<string>::iterator word2=words.begin();word2!=words.end();++word2) {
                if (word1==word2) continue;
                if ((*word2).find(*word1)!=string::npos) {
                    ans.push_back(*word1);
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
	string input_list, item;
	vector<string> input, ans;
	
	while (getline(cin,input_list)) {
		istringstream T(input_list);
		while (T >> item) input.push_back(item);
		ans = s.stringMatching(input);
		while (!ans.empty()){
			cout << ans.back() << " ";
			ans.pop_back();
		}
		cout << endl;
		input.clear();
	}
	
	return 0;
}