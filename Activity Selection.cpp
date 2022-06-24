// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

struct Act{
    int st;
    int end;
};


bool cmp(struct Act a1, Act a2){
    if(a1.end < a2.end)
        return true;
    else if(a1.end == a2.end){
        return (a1.st < a2.st);
    }else
        return false;
}

class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        struct Act arr[n];
        
        for(int i=0;i<n;i++){
            arr[i].st = start[i];
            arr[i].end = end[i];
        }
        sort(arr, arr+n, cmp);
        int endTime = arr[0].end, tasks = 1, j = 0;
        for(int i=1;i<n;i++){
            if(arr[i].st > endTime){
                // cout<<arr[i].st<<" "<<arr[i].end<<endl;
                endTime = arr[i].end;
                tasks++;
            }
        }
        
        return tasks;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends
