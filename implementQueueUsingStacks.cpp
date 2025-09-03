class MyQueue {
public:
    stack<int> list;
    stack<int> listTwo;
    MyQueue() {
    }
    
    void push(int x) 
    {
        list.push(x);
    }
    
    int pop() 
    {
        int val = 0;
        if(!listTwo.empty())
        {
            val = listTwo.top();
            listTwo.pop();
            return val;
        }
        else
        {
            while(!list.empty())
            {
                listTwo.push(list.top());
                list.pop();
            }
            val = listTwo.top();
            listTwo.pop();
        }
        return val;
    }
    
    int peek() 
    {
        int val = 0;
        if(!listTwo.empty())
        {
            val = listTwo.top();
            return val;
        }
        else
        {
            while(!list.empty())
            {
                listTwo.push(list.top());
                list.pop();
            }
            val = listTwo.top();
        }
        return val;
    }
    
    bool empty() 
    {
        return list.empty() && listTwo.empty();
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