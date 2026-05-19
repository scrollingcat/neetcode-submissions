class MyStack {
private:
    std::queue<int> q1;
public:
    MyStack() {
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int i = q1.size();
        while(i != 1)
        {
            q1.push(q1.front());
            q1.pop();
            i--;
        }
        int res = q1.front();
        q1.pop();
        return res;
    }
    
    int top() {
        int i = q1.size();
        while(i != 1)
        {
            q1.push(q1.front());
            q1.pop();
            i--;
        }
        int res = q1.front();
        q1.push(q1.front());
        q1.pop();
        return res;
    }
    
    bool empty() {
        if (q1.empty()) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */