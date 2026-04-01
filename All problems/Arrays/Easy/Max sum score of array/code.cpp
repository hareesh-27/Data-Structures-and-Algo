class Solution {
public:
    long long maxSumScore(vector<int>& nums) {
        long long tot_sum=0;
        for(int i=0;i<nums.size();i++) tot_sum+=nums[i];
        long long prefix_sum=0;
        long long maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            prefix_sum+=nums[i];
            maxi=max(maxi,max(prefix_sum,tot_sum - prefix_sum + nums[i]));
        }
        return maxi;
    }
};
