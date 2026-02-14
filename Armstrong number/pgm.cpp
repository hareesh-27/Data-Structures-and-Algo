class Solution {
public:
    bool isArmstrong(int n) {
        //calculate num of digits
        int digits=0;
        int m=n;
        while(m>0)
        {
            digits+=1;
            m/=10;
        }

        //actual pgm now
        int o=n,rem,sol=0;
        while(o>0)
        {   int power=1;
            rem=o%10;
            for(int i=1;i<=digits;i++)
            {
                power=power*rem;
            }
            sol+=power;
            o=o/10;
        }
        if(sol==n) return 1;
        else return 0;
    }
};
