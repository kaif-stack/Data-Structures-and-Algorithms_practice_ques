//   MyStack* obj = new MyStack();
//   obj->push(x);
//   int param_2 = obj->pop();
//   int param_3 = obj->top();
//   bool param_4 = obj->empty();
#include <bits/stdc++.h>
using namespace std;
class MyStack {
public:
    queue <int> q1, q2;

    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()) return 0;
        else
        {
            while(q1.size()>1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int val = q1.front();
            q1.pop();
            while(q2.size()!=0)
            {
                q1.push(q2.front());
                q2.pop();
            }
            return val;
        }
    }
    
    int top() {
        if(q1.empty()) return 0;
        else
        {
            while(q1.size()>1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            q2.push(q1.front());
            int val = q1.front();
            q1.pop();
            while(q2.size()!=0)
            {
                q1.push(q2.front());
                q2.pop();
            }
            return val;
        }
        
    }
    
    bool empty() {
        if(q1.size()==0)return true;
        return false;
    }
}ob;

int main()
{
    MyStack();
    ob.push(1);
    ob.push(2);
    cout<<ob.top();
    cout<<ob.pop();
    cout<<ob.empty();
}




 