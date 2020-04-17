class Solution {
public:
    int myAtoi(string str) {
        istringstream Str2Int(str);
        int ans=0;
        Str2Int >> ans;
        return ans;
    }
};