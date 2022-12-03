#include "stdio.h"
#include "stdlib.h"


class Solution {
    double power(double x, int n){
        if(n == 0) return 1.0;
        if(n == 1) return x;
        if(n < 0) return power(1/x, -n);
        double result = power(x*x, n/2);
        if(n%2) result *= x;
        return result;
    }
        public:
        double myPow(double x, int n) {
        return power(x, n);
    }
};
