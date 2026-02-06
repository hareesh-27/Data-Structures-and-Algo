class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        int profit=0;
        int bought=prices[0];
        for(int i=1;i<n;i++)
        {
            profit=-bought+prices[i];
            max_profit=max(profit,max_profit);
            bought=min(bought,prices[i]);
        }

        return max_profit;
    }
};