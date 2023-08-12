class Solution {
public:
    // trivial O(sqrt(x)) is to loop through and see which ones are closest to x.
    // can use taylor expansion of x^0.5 at given number a
    // newtons sums to solve for root of y^2 - x = 0
     
    int mySqrt(int x) {
        
        //using newton's method
        
        int a = 1e5;
        float y = 0;
        int times = 10;
        while(times--) {
            // a - f(a) / f'(a) = y
            y = a - (a/ (float) 2) + x/ ((float) (2*a));
            a = y;
        }

        long long n = floor(y);

        for (;n*n>x;n--);
        for(;(n+1)*(n+1)<=x;n++);

        return n;
    }
};