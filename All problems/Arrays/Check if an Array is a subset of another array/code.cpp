class Solution {
public:
    bool isSubset(vector<int>& arr1, vector<int>& arr2) {
        // Your code goes here
        map<int,int> mp;
        for(int i=0;i<arr2.size();i++)
        {
            mp[arr2[i]]=i;
        }

        for(int i=0;i<arr1.size();i++)
        {
            if((mp.find(arr1[i]))==mp.end()) return 0;
        }
        return 1;
    }
};
