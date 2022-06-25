// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

void printSubSeq(vector<int> arr, int idx, int N, int sum, vector<int> &temp, vector<int> &ans){
    if(idx == N){
        ans.push_back(sum);
        return;
    }
    
    sum+=arr[idx];
    temp.push_back(arr[idx]);
    
    printSubSeq(arr, idx+1, N, sum, temp, ans);
    
    sum-=arr[idx];
    temp.pop_back();
        
    printSubSeq(arr, idx+1, N, sum, temp, ans);
}

class Solution{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        sort(arr.begin(), arr.end());
        
        vector<int> temp, ans;
        
        int sum = 0;
        
        printSubSeq(arr, 0, N, sum, temp, ans);
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
