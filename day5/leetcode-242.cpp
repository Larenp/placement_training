class MyQueue {
public:
    vector<int> st;
    MyQueue() {}

    void push(int x) { st.push_back(x); }

    int pop() {
        int val = st[0];
        st.erase(st.begin());
        return val;
    }

    int peek() { return st[0]; }

    bool empty() {
        if (!st.empty()) {
            return false;
        } else {
            return true;
        }
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