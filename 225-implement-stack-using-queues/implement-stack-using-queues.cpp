
class MyStack {
private:
    queue<int> queue1; // Primary queue
    queue<int> queue2; // Auxiliary queue

public:
    // Constructor to initialize the stack
    MyStack() {}

    // Push element x to the top of the stack
    void push(int x) {
        queue1.push(x);
    }

    // Removes the element on the top of the stack and returns it
    int pop() {
        // Move elements from queue1 to queue2 except the last one
        while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }

        // The last element is the top of the stack
        int topElement = queue1.front();
        queue1.pop();

        // Swap queue1 and queue2
        swap(queue1, queue2);

        return topElement;
    }

    // Returns the element on the top of the stack
    int top() {
        // Move elements from queue1 to queue2 except the last one
        while (queue1.size() > 1) {
            queue2.push(queue1.front());
            queue1.pop();
        }

        // The last element is the top of the stack
        int topElement = queue1.front();
        queue2.push(topElement);
        queue1.pop();

        // Swap queue1 and queue2
        swap(queue1, queue2);

        return topElement;
    }

    // Returns true if the stack is empty, false otherwise
    bool empty() {
        return queue1.empty();
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