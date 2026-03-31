class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<nums.size();i++)
        {
            bool left = 1;
            bool right = 1;

            if((i>0) && nums[i]==nums[i-1]) left=0;
            if((i<nums.size()-1) && nums[i]==nums[i+1]) right=0;

            if(left&&right) return nums[i];
        }
        return -1;
    }
};
