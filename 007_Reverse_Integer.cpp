/*
* author: cocakuma
* blog: http://mrkod.com/
*/

class Solution {
public:
    int reverse(int x) {
       long long  res = 0;
        while (x) {
            res = res * 10 + x % 10;
            x /= 10;
        }
    
        if (res < INT_MIN || res > INT_MAX) {
            res = 0;
        }

        return  res;
    }
};