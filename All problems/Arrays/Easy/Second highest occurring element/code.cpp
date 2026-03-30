class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int maxele=-1; int secmaxele=-1;
        int maxfreq=0; int secmaxfreq=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;

        for(auto it:mp)
        {
            int ele=it.first;
            int freq=it.second;

            if(freq>maxfreq)
            {
                secmaxfreq=maxfreq;
                secmaxele=maxele;
                maxfreq=freq;
                maxele=ele;
            }
            else if(freq==maxfreq) maxele=min(maxele,ele);

            else if(freq>secmaxfreq)
            {
                secmaxfreq=freq;
                secmaxele=ele;
            }

            else if(freq==secmaxfreq) secmaxele=min(secmaxele,ele);
        }

        return secmaxele;
    }
};
