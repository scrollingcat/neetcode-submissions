class MyStack {
private:
    std::queue<int> q1;
    std::queue<int> q2;
    bool flag = true;
public:
    MyStack() {
    }
    
    void push(int x) {
        if(flag)
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
    }
    
    int pop() {
        if (flag)
        {
            while(q1.size() != 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int res = q1.front();
            q1.pop();
            flag = !flag;
            return res;
        }
        else
        {
            while(q2.size() != 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            int res = q2.front();
            q2.pop();
            flag = !flag;
            return res;
        }
    }
    
    int top() {
        if (flag)
        {
            while(q1.size() != 1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int res = q1.front();
            q2.push(q1.front());
            q1.pop();
            flag = !flag;
            return res;
        }
        else
        {
            while(q2.size() != 1)
            {
                q1.push(q2.front());
                q2.pop();
            }
            int res = q2.front();
            q1.push(q2.front());
            q2.pop();
            flag = !flag;
            return res;
        }
    }
    
    bool empty() {
        if (q1.empty() && q2.empty()) return true;
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