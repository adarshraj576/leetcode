// Leetcode : https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        int left = 0;
        int right = x;
        while(left < right){
            int mid = left + (right - left)/2;
            if ((long long)mid * mid <= x) left = mid + 1;
            else right = mid;
        }
        return left - 1;
    }
};