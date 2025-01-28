// Leetcode : https://leetcode.com/problems/min-stack/

class MinStack {
public:
    vector <pair<int, int>> vectorPair;
    MinStack() {}
    
    void push(int val) {
        if(vectorPair.empty()) vectorPair.push_back({val, val});
        else{
            vectorPair.push_back({val, min(val, vectorPair.back().second)});
        }
    }
    
    void pop() {
        vectorPair.pop_back();
    }
    
    int top() {
        return vectorPair.back().first;
    }
    
    int getMin() {
        return vectorPair.back().second;
    }
};