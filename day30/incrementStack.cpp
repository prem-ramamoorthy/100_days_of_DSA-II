class CustomStack {
public:
    int maxSize;
    vector<int> stack;

    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }

    void push(int x) {
        if (stack.size() < maxSize)
            stack.push_back(x);
    }

    int pop() {
        if (stack.empty())
            return -1;
        int val = stack.back();
        stack.pop_back();
        return val;
    }

    void increment(int k, int val) {
        int count = min((int)stack.size(), k);
        for (int i = 0; i < count; ++i)
            stack[i] += val;
    }
};


int main() {
    CustomStack customStack(3);
    customStack.push(1);
    customStack.push(2);
    cout << customStack.pop() << endl;
    customStack.push(2);
    customStack.push(3);
    customStack.push(4);
    customStack.increment(5, 100);
    customStack.increment(2, 100);
    cout << customStack.pop() << endl;
    cout << customStack.pop() << endl;
    return 0;
}