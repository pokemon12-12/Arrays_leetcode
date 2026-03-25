class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 3;
        int a=1; //f(1)=1
        int b=2; //f(2)=2
        int c;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};