class MinStack {
public:
    stack<int> Stack;
    stack<int> minstack;
    int min;
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int val) {
        Stack.push(val);
        if(min>val)
            min = val;
        minstack.push(min);
    }
    
    void pop() {
        minstack.pop();
        if(minstack.empty())
            min = INT_MAX;
        else
            min = minstack.top();
        Stack.pop();
    }
    
    int top() {
        return Stack.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */