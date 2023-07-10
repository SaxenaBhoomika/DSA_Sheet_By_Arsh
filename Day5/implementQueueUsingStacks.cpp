class MyQueue {
public:
    stack<int> s1, s2;
    
    void transfer()
    {
        int x = 0;
        if (s2.empty())
        {
            while (!s1.empty())
            {
                x= s1.top();
                s1.pop();
                s2.push(x);
            }
        }
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    
    void pop(void) {
        transfer();
        s2.pop();
    }

    
    int peek(void) {
        transfer();
        
        return s2.top();
    }

    
    bool empty(void) {
        return s2.empty() && s1.empty();

    
    }
};
