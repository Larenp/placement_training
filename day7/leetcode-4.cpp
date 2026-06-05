class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto p : nums2) {
            nums1.push_back(p);
        }
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        int mid = n / 2;

        if (n % 2 == 0) {
            return (double(nums1[mid - 1]) + double(nums1[mid])) / 2;
        } else {
            return double(nums1[mid]);
        }
    }
};