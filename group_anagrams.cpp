// Leetcode: https://leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        for( auto s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};