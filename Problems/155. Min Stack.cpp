class MinStack {
public:
    stack<int> myStack;
    multiset<int> s;
    MinStack() {
        stack<int> myStack;
    }
    
    void push(int val) {
        myStack.push(val);
        s.insert(val);
    }
    
    void pop() {
        int ele = myStack.top();
        myStack.pop();
        auto it = s.find(ele);
        s.erase(it);
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return *s.begin();
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
