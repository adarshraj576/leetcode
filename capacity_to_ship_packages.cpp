// Leetcode : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    bool feasible(int capacity, vector<int>& weights, int days){
        int nDays = 0;
        int acc = 0;
        for(int i = 0; i < weights.size(); i++){
            acc += weights[i];
            if ((i == weights.size() - 1) && acc < capacity) {
                nDays++;
            }
            else if ((i == weights.size() - 1) && acc > capacity) {
                nDays += acc/ capacity + 1;
            }
            else if(acc == capacity){
                nDays++;
                acc = 0;
            }
            else if(acc > capacity){
                nDays++;
                acc = weights[i];
            }
        }
        return nDays <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = std::accumulate(weights.begin(), weights.end(), 0);
        while(left < right){
            int mid = left + (right - left)/2;
            if(feasible(mid, weights, days)) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};