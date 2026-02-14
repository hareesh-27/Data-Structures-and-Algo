class Solution {
public:
    bool isPalindrome(int x) {
        long long rem,rev=0,y=x;
        if(x<0)
        {
            return 0;
            exit(0);
        }

        while(y>0)
        {
            rem=y%10;
            rev=rev*10+rem;
            y/=10;
        }

        if(rev==x) return 1;
        else return 0;
    }
};