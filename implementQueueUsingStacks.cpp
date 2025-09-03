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
        peek();
        int val = 0;
        if(!listTwo.empty())
        {
            val = listTwo.top();
            listTwo.pop();
            return val;
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

