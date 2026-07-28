class MinStack {
public:
    stack<long long> st;
    long long mini;

    MinStack() {

    }

    void push(int value) {

        if (st.empty()) {
            st.push(value);
            mini = value;
        }
        else {

            if (value >= mini) {
                st.push(value);
            }
            else {
                st.push(2LL * value - mini);
                mini = value;
            }
        }
    }

    void pop() {

        if (st.empty()) return;

        long long x = st.top();
        st.pop();

        if (x < mini) {
            mini = 2LL * mini - x;
        }
    }

    int top() {

        long long x = st.top();

        if (x >= mini)
            return x;

        return mini;
    }

    int getMin() {

        return mini;
    }
};