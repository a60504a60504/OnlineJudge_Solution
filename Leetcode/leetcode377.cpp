class Solution {
public:
    int DP[10000];
    void initDP() {
        for (int i=0;i<10000;i++) DP[i]=-1;
    }
    int check(vector<int>&nums, int target) {
        int ans=0;
        if (target<0) return 0;
        if (target==0) return 1;
        else {
            for (vector<int>::iterator it=nums.begin();it!=nums.end();it++) {
                if (target-*it>=0) {
                    if (DP[target-*it]==-1) DP[target-*it] = check(nums,target-*it);
                    ans += DP[target-*it];
                }
            }
        }
        return ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        initDP();
        int ans = check(nums,target);
        return ans;
    }
};