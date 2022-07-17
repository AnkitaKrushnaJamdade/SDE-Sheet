#include <queue>

class Stack {
	// Define the data members.
    
   public:
    queue<int> st;
   
    
    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return st.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(!st.size())
            return true;
        return false;
    }

    void push(int element) {
        // Implement the push() function.
        
        if(st.empty()){
            st.push(element);
            return;
        }
        st.push(element);
        int sz = st.size()-1;
        
        while(sz){
            st.push(st.front());
            st.pop();
            sz--;
        }
        
//         if(st.empty()){
//             st.push(element);
//             return;
//         }
        
//         queue<int> t;
        
//         while(!st.empty()){
//             t.push(st.front());
//             st.pop();
//         }
        
//         st.push(element);
        
//         while(!t.empty()){
//             st.push(t.front());
//             t.pop();
//         }        
    }

    int pop() {
        // Implement the pop() function.
        if(!st.size())
            return -1;
        int dele = st.front();
        st.pop();
        return dele;
    }

    int top() {
        // Implement the top() function.
        if(!st.size())
            return -1;
        return st.front();
    }
};
