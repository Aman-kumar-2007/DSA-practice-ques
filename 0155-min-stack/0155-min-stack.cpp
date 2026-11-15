class MinStack {
public:
    stack<int> st;
    stack<int> mn;
    MinStack() {}

    void push(int value) {
        if (st.size() == 0) {
            st.push(value);
            mn.push(value);
        }else {
          st.push(value);
          if(mn.top() < value) mn.push(mn.top());
          else mn.push(value);
        }
        
    }

    void pop() {
      st.pop();
      mn.pop();
    }

    int top() {
      return st.top();
    }

    int getMin() {
      return mn.top();
    }
};