class Solution{
public:
    int subarraySumDivisbleByK(vector<int> &nums, int k){
        int prefix_sum=0; int cnt=0;
        map<int,int> mp; mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            prefix_sum+=nums[i];

            int rem = prefix_sum % k;
            if(rem<0) rem+=k;

            if(mp.find(rem) != mp.end()) cnt+=mp[rem];

            mp[rem]++;            
        }
        return cnt;
    }
};
