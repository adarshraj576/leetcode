// Leetcode : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    bool feasible(int days, vector<int>& bloomDay, int m, int k){
        vector<int> temp = bloomDay;
        int bouquet = 0;
        int count = 0;
        for(int i = 0; i < temp.size(); i++){
            if(days >= temp[i]) temp[i] = 1;
            else temp[i] = 0;
        }
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == 1) count++;
            if(temp [i] == 0) count = 0;
            if(count == k){
                count = 0;
                bouquet++;
            }
        }
        return bouquet >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)bloomDay.size() < (long long)m * (long long)k) return -1;
        int left = 1;
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        while(left < right){
            int mid = left + (right-left)/2;
            if(feasible(mid, bloomDay, m, k)) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};