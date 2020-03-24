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
	int x,y;
	while (cin >> x>> y) {
		cout << s.twoSum(x,y)<< endl;
	}
	
	return 0;
}