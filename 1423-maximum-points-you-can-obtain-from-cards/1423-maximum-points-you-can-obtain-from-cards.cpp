class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0; int rsum=0; int maxsum=0;
        
        for(int i=0;i<=k-1;i++) lsum+=cardPoints[i];
        maxsum=lsum;
        int rindex=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=cardPoints[i];
            rsum+=cardPoints[rindex];
            maxsum=max(maxsum,rsum+lsum);
            rindex--;
        }
        return maxsum;
    }
};