class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int once=0; int n=nums.size();
        for(int i=0;i<n;i++){
            once = once^nums[i];
        }

        return once;
        //your code goes here
    }
};
