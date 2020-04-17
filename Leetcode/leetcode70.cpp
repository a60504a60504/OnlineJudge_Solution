class Solution {
public:
    int climbStairs(int n) {
        int n_2 = 1, n_1 = 2, ans;
        if (n==1) return n_2;
        if (n==2) return n_1;
        for (int i=3;i<=n;i++){
            ans = n_2 + n_1;
            n_2 = n_1;
            n_1 = ans;
        }
        return ans;
    }
};