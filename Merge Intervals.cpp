#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &A)
{
    // Write your code here.
    sort(A.begin(), A.end());
    
    stack<pair<int,int>> st;
    st.push({A[0][0], A[0][1]});
    for(int i=1;i<A.size();i++){
        int topEle1=st.top().first, topEle2=st.top().second;
        int currFirst = A[i][0], currSec = A[i][1];
        
        if(currFirst<=topEle2){
            int s=max(topEle2, currSec);
            s = max(s, currFirst);
            pair<int,int> temp={topEle1, s};
            st.pop();
            st.push(temp);
        }
        else{
            st.push({currFirst, currSec});
        }
    }
    
    A.clear();
    
    while(!st.empty()){
        A.push_back({st.top().first, st.top().second});
        st.pop();
    }
    
    reverse(A.begin(), A.end());
    
    return A;
}
