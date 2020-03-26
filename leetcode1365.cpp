#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int countArray[101];
        for (int i=0;i<101;i++) countArray[i] = 0;
        for (std::vector<int>::iterator it=nums.begin();it!=nums.end();++it) {
            countArray[*it]++;
        }
        for (int i=1;i<101;i++) countArray[i] += countArray[i-1];
        for (std::vector<int>::iterator it=nums.begin();it!=nums.end();++it) {
            if (*it!=0) ans.push_back(countArray[(*it)-1]);
            else ans.push_back(0);
        }
        return ans;
    }
};

void printvector(vector<int> &ans) {
	for (vector<int>::iterator it=ans.begin();it!=ans.end();++it) {
		cout << *it << " ";
	}
	cout << endl;
}

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
		vector<int> nums, ans;
		nums = string2vector(input_list);
		ans = s.smallerNumbersThanCurrent(nums);
		printvector(ans);
	}
	
	return 0;
}