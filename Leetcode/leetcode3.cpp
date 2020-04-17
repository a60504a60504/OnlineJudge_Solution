/*
Strategy: sliding window, hashmap
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int Map[128] = {0};
        for (int left=0, right=0; right<s.size(); right++) {
            left = max(left, Map[s[right]]);
            ans = max(ans, right-left+1);
            Map[s[right]] = right+1;
        }
        return ans;
    }
};