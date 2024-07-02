class MyQueue {
public:
    stack<int> st1,st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty()){
            int ch=st1.top();
            st1.pop();
            st2.push(ch);
        }
        st1.push(x);
         while(!st2.empty()){
            int ch=st2.top();
            st2.pop();
            st1.push(ch);
    }
    }
    
    int pop() {
       int x=st1.top();
        st1.pop();
        return x;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */