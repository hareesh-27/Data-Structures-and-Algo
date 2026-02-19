#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unionArr;
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;

        // merge both arrays
        while (i < n && j < m) {
            if (nums1[i] <= nums2[j]) {
                if (unionArr.empty() || unionArr.back() != nums1[i])
                    unionArr.push_back(nums1[i]);
                i++;
            } else {
                if (unionArr.empty() || unionArr.back() != nums2[j])
                    unionArr.push_back(nums2[j]);
                j++;
            }
        }

        // remaining elements of nums1
        while (i < n) {
            if (unionArr.empty() || unionArr.back() != nums1[i])
                unionArr.push_back(nums1[i]);
            i++;
        }

        // remaining elements of nums2
        while (j < m) {
            if (unionArr.empty() || unionArr.back() != nums2[j])
                unionArr.push_back(nums2[j]);
            j++;
        }

        return unionArr;
    }
};
