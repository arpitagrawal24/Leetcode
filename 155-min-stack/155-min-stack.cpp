class MinStack
{
    public:
        vector<int> stack;
    int gmin = INT_MAX;
    MinStack() {}

    void push(int val)
    {
        stack.push_back(val);
        gmin = min(gmin, val);
    }

    void pop()
    {
        stack.pop_back();
        gmin = INT_MAX;
        for (auto &i: stack)
        {
            gmin = min(gmin, i);
        }
    }

    int top()
    {
        return stack[stack.size() - 1];
    }

    int getMin()
    {
        return gmin;
    }
};

/**
 *Your MinStack object will be instantiated and called as such:
 *MinStack* obj = new MinStack();
 *obj->push(val);
 *obj->pop();
 *int param_3 = obj->top();
 *int param_4 = obj->getMin();
 */