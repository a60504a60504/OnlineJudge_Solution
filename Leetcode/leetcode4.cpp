class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size()+nums2.size();
        double ans;
        if (total&1) {
            int mid_pos = (total>>1)+1;
            vector<int>::iterator n1_p=nums1.begin(), n2_p=nums2.begin();
            for (int i=1;i<mid_pos;i++) {
                if (n1_p==nums1.end()) n2_p++;
                else if (n2_p==nums2.end() || *n1_p<=*n2_p) n1_p++;
                else n2_p++;
            }
            if (n1_p==nums1.end()) ans=*n2_p;
            else if (n2_p==nums2.end() || *n1_p<=*n2_p) ans=*n1_p;
            else ans=*n2_p;
        }
        else {
            int mid_pos = (total>>1);
            vector<int>::iterator n1_p=nums1.begin(), n2_p=nums2.begin();
            for (int i=1;i<mid_pos;i++) {
                if (n1_p==nums1.end()) n2_p++;
                else if (n2_p==nums2.end() || *n1_p<=*n2_p) n1_p++;
                else n2_p++;
            }
            if (n1_p==nums1.end()) {
                ans = *n2_p;
                n2_p++;
            }
            else if (n2_p==nums2.end()||*n1_p<=*n2_p) {
                ans = *n1_p;
                n1_p++;
            }
            else {
                ans = *n2_p;
                n2_p++;
            }
            if (n1_p==nums1.end()) ans+=*n2_p;
            else if (n2_p==nums2.end() || *n1_p<=*n2_p) ans+=*n1_p;
            else ans+=*n2_p;
            ans /= 2;
        }
        return ans;
    }
};