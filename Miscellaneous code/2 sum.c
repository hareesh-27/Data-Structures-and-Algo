#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        map<int, int> mpp;

        for (int i = 0; i < arr.size(); i++) {
            int a = arr[i];
            int need = target - a;

            if (mpp.find(need) != mpp.end()) {
                return true;
            }

            mpp[a] = i;
        }

        return false;
    }
};
