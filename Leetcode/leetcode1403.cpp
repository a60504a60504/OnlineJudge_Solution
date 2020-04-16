#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<>());
        int right = 0, left = 0;
        vector<int> ans;
        for (int i=0;i<nums.size();i++) left += nums[i];
        for (int i=0;i<nums.size();i++) {
            right += nums[i];
            left -= nums[i];
            ans.push_back(nums[i]);
            if (right > left) break;
        }
        return ans;
    }
};

int main () {
	string input;
	while (getline(cin,input,'\n')) {
		istringstream VEC_IN(input);
		int num;
		vector <int> nums, ans;
		Solution s;
		while (VEC_IN >> num) nums.push_back(num);
		
		ans = s.minSubsequence(nums);
		
		for (vector<int>::iterator it=ans.begin();it!=ans.end();++it)
			cout << *it<< " ";
		cout << endl;
	}
	return 0;
}