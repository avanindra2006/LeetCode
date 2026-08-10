class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        if(n>0){
            while(n>0){
                if(n%2==1){res *= x;}
                x *= x;
                n /= 2;  
            }
        }
        if(n<0){
            long long n1 = (long long)n * -1;
            x = 1/x;
            while(n1>0){
                if(n1%2==1){res *= x;}
                x *= x;
                n1 /= 2;  
            }
        }
        return res;
    }
};