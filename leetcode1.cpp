#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i=0;i<nums.size();i++)
        {
            for (int j=i+1;j<nums.size();j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    ans.push_back(j);
                    ans.push_back(i);
                    return ans;
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
	vector<int> nums, ans;
	int item, target;
	
	while (getline(cin,input_list)) {
		cin >> target;
		istringstream T(input_list);
		while (T >> item) nums.push_back(item);
		ans = s.twoSum(nums,target);
		while (!ans.empty()){
			cout << ans.back() << " ";
			ans.pop_back();
		}
	}
	
	return 0;
}