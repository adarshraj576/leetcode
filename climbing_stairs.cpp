// Leetcode : https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2) return n;
        int first = 1;
        int second = 2;
        int third;
        for(int i = 2; i < n; i++){
            third = first + second;
            first = second;
            second = third;
        }
        return third;
    }
};