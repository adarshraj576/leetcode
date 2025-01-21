// LeetCode: https://leetcode.com/problems/valid-anagram/

//Solution 1: Using sorting
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t)  return true;
        return false;
    }
};

// Solution 2: Using Hash Map
class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        unordered_map <char, int> mp;
        if(s_len != t_len) return false;
        for (int i=0; i<s_len; i++){
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if(it->second != 0) return false;
        }
        return true;
    }
};