class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1;
        int p1 = m-1;
        int p2 = n-1;
        while(p2>=0 && p1>=0)
        {
            if(nums1[p1]>=nums2[p2])
            {
                nums1[last]=nums1[p1];
                last--;
                p1--;
            }
            else
            {
                nums1[last]=nums2[p2];
                last--;
                p2--;
            }
        }
        while(p2>=0)
        {
            nums1[last] = nums2[p2];
            p2--;
            last--;
        }
    }
};