#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int CountArray[501], ans=-1;
        for (int i=0;i<501;i++) CountArray[i]=0;
        for (std::vector<int>::iterator it=arr.begin();it!=arr.end();++it) {
            CountArray[*it]++;
        }
        for (int i=500;i>0;i--) {
            if (CountArray[i]==i) {
                ans = i;
                return ans;
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
		vector<int> nums;
		int ans;
		nums = string2vector(input_list);
		ans = s.findLucky(nums);
		cout << ans << endl;
	}
	
	return 0;
}