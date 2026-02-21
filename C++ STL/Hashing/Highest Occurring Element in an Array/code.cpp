class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int maxele; int maxfreq=0; int n=nums.size();
        unordered_map<int,int> mpp;

        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for (auto it: mpp)
        {
            int ele=it.first;
            int freq=it.second;

            if(freq>maxfreq)
            {
                maxele=ele;
                maxfreq=freq;
            }
            else if(freq==maxfreq) maxele=min(ele,maxele);
        }
        return maxele;
    }
};
