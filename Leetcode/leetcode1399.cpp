class Solution {
public:
    int countLargestGroup(int n) {
        int gp[37],max_num, ans=0;
        int temp_num, gp_num;
        for (int i=0;i<37;i++) gp[i] = 0;
        for (int i=1;i<=n;i++) {
            temp_num = i;
            gp_num = 0;
            while (temp_num>0) {
                gp_num += temp_num%10;
                temp_num /= 10;
            }
            gp[gp_num]+=1;
            max_num = max(max_num,gp[gp_num]);
        }
        
        for (int i=0;i<37;i++) 
            if (gp[i]==max_num) ans+=1;
        return ans;
    }
};