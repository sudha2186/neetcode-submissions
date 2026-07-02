class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int st = 0, end = nums1.size() - 1;
        while(st < n) {
            nums1[end--] = nums2[st++];
        }
        sort(nums1.begin(), nums1.end());
    }
};