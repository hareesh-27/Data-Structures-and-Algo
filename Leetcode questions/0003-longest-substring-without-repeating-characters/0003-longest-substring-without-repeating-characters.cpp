class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];int l=0,r=0,maxlen=0;

        for(int i=0;i<256;i++) hash[i]=-1;

        while(r<s.size())
        {
            if(hash[s[r]]!=-1)
            {
                if(hash[s[r]]>=l)  l=hash[s[r]]+1;
                
            }
            maxlen=max(r-l+1,maxlen);
            hash[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};