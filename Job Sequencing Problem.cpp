// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

bool cmp(struct Job j1, Job j2){
    if (j1.profit > j2.profit)
        return true;
        
    return false;
}

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        // First sort the Job structure according to profit
        
        if(n==1){
            vector<int> ans;
            ans.push_back(1);
            ans.push_back(arr[0].profit);
            return ans;
        }
        
        sort(arr, arr+n, cmp);
        
        int mxDead = INT_MIN;
        
        for(int i = 0;i < n;i++){
            mxDead = max(mxDead, arr[i].dead);
        }
        
        vector<int> vec(mxDead,-1);
        
        
        // Now fill the vector vec by selecting first most profitable and perform the spcific 
        // task at it's deadline
        
        int profit = 0;
        // cout<<"seg\n";
        
        for(int i=0;i<n;i++){
            int deadLine = arr[i].dead;
            if (vec[deadLine - 1] == -1){
                vec[deadLine - 1] = arr[i].id;
                profit+=arr[i].profit;
            }else{
                int j = deadLine - 2;
                while(j >=0 && vec[j] != -1){
                    j--;
                }
                
                if(j>=0 && vec[j] == -1){
                    profit+=arr[i].profit;
                    vec[j] = arr[i].id;
                }
            }
        }
        
        int cnt=0;
        for(auto i: vec){
            if(i!=-1){
                cnt++;
            }
        }
        
        vector<int> ans;
        
        ans.push_back(cnt);
        ans.push_back(profit);
        
        return ans;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
