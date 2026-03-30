class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        int pts=0; int sum=0;
        
        for(int i=0;i<k;i++)
        {
            sum+=calories[i];
        }
        if(sum<lower) pts--;
        if(sum>upper) pts++;

        for(int i=k;i<calories.size();i++)
        {
            sum=sum+calories[i]-calories[i-k];

            if(sum<lower) pts--;
            if(sum>upper) pts++;
        }

        return pts;
    }
};
