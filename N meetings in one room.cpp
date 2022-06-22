// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


struct meetings{
    int st;
    int end;
    int pos;
};


bool cmp(struct meetings m1, meetings m2){
    if(m1.end < m2.end)
        return true;
    else if(m1.end > m2.end)
        return false;
    else if(m1.pos <m2.pos)
        return true;
    else
        return false;
}

class Solution{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        struct meetings meet[n];
        
        for(int i=0;i<n;i++){
            meet[i].st = start[i];
            meet[i].end = end[i];
            meet[i].pos = i+1;
        }
        
        sort(meet, meet+n, cmp);
        
        vector<int> ans;
        ans.push_back(meet[0].pos);
        
        int endTime = meet[0].end;
        
        for(int i=0;i<n;i++){
            if(endTime < meet[i].st){
                endTime = meet[i].end;
                ans.push_back(meet[i].pos);
            }
        }
        
        for(auto i: ans)
            cout<<i<<endl;
            
        return ans.size();
    }
};




// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
