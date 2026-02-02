class Solution {
public:
    double myPow(double x, long n) { // TC -> O(log(n))
        bool flag = false;
        if(n<0){
            flag = true;
            n = -n;
        }
        double ans = 1.0;
        while(n>0){
            if(n%2==0){ // power is even
                x *= x; n /= 2;
            }else{ // power is odd
                ans *= x; n--;
            }
        }
        if(flag==true) return 1/ans;
        return ans;
    }
};