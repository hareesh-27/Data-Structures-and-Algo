class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing_Number = 0;
        for(int i=1;i<=nums.size();i++){
            missing_Number =missing_Number^i;
            missing_Number = missing_Number^nums[i-1];
        }
        return missing_Number;
    }
};
