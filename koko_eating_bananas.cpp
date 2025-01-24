// Leetcode : https://leetcode.com/problems/koko-eating-bananas/

class Solution {
public:
    bool feasible(int speed, vector<int>& piles, int h){
        int hrs_taken = 0;
        for(int i = 0; i < piles.size(); i++){
            hrs_taken += (piles[i]-1)/speed+1;
        }
        return hrs_taken <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (feasible(mid, piles, h)) {
                right = mid; 
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};