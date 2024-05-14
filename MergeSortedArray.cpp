#include<vector>
#include<algorithm>

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    for (size_t i = 0; i < n; ++i) {
        nums1[m + i] = nums2[i];
    }
    sort(begin(nums1), end(nums1));
}