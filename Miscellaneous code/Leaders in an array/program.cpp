#include<bits/stdc++.h>
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans;
      int maxi=INT_MIN;
      for(int i=nums.size()-1;i>=0;i--)
      {
        if(nums[i]>maxi){
            maxi=nums[i];
            ans.push_back(maxi);
        }
      }
      reverse(ans.begin(), ans.end());
      return  ans;
    }
};
