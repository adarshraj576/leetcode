// Leetcode : https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }            
            else{
                if(st.empty()) return false;
                int top = st.top();
                st.pop();
                if(s[i] == ')' && top != '(') return false;        
                else if(s[i] == '}' && top != '{') return false;        
                else if(s[i] == ']' && top != '[') return false;        
            }
        }
        return !st.empty() ? false : true;
    }
};