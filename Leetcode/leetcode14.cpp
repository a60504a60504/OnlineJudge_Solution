class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        char temp;
        bool breakflag = false;
        if (strs.empty()) return "";
        for (int i=0;i<strs[0].size();i++) {
            temp = strs[0][i];
            for (int j=1;j<strs.size();j++) {
                if (temp!=strs[j][i]) {
                    breakflag = true;
                    break;
                }
            }
            if (breakflag) break;
            ans += temp;
        }
        return ans;
    }
};