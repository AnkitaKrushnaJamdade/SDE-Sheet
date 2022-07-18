class MyQueue {
public:
    
//     Brute force approach:
//     stack<int> st;
    
//     void push(int x) {
//         if(!st.size()){
//             st.push(x);
//             return;
//         }
        
//         stack<int> temp;
        
//         while(!st.empty()){
//             temp.push(st.top());
//             st.pop();
//         }
        
//         temp.push(x);
        
//         while(!temp.empty()){
//             st.push(temp.top());
            
//             temp.pop();
//         }
//     }
    
//     int pop() {
//         if(!st.size())
//             return -1;
//         int ele = st.top();
//         st.pop();
//         return ele;
//     }
    
//     int peek() {
//         if(!st.size())
//             return -1;
        
//         return st.top();
//     }
    
//     bool empty() {
//         if(!st.size())
//             return true;
        
//         return false;
//     }
    
    
    
//     Optimal Approach:
    stack<int> input, output;
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.size()){
            int ele = output.top();
            output.pop();
            return ele;
        }
        
        while(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        int ele = output.top();
        output.pop();
        return ele;
    }
    
    int peek() {
        if(!output.size() && !input.size())
            return -1;
        
        if(input.size()!=0 && output.size()==0){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int ele = output.top();
            return ele;
        }
        
        return output.top();
    }
    
    bool empty() {
        if(!output.size() && !input.size())
            return true;
        return false;
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
