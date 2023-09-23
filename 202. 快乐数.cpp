class Solution {
public:
    bool isHappy(int n) {
        int a=0;
        for(int i=0;i<10000;i++)
        {
            while(n > 0) 
            {
            a+= pow(n%10,2);
            n = n /10;
            }
                if(a==1)
                {
                return true;    
                }
            n=a;
            a=0;
        }
        return false;
    }
};
