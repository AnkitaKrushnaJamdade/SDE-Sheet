// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // if(n==0)    return 0;
        // int mxLen=0, len=0;
        // long long currSum=0;
        // for(int i=0;i<n;i++){
        //     currSum=A[i];
        //     for(int j=i+1;j<n;j++){
        //         currSum+=A[j];
        //         if(currSum==0)
        //             mxLen=max(mxLen, (j-i+1));
        //     }
        // }
        
        
        if(n==0)    return 0;
        int mxLen=0;
        long long s=0;
        unordered_map<int,int> umap;
        
        for(int i=0;i<n;i++){
            s+=A[i];
            if(s==0){
                mxLen=i+1;
            }
            else{
                if(umap.find(s)!=umap.end()){
                    mxLen=max(mxLen, i-umap[s]);
                }
                else{
                    umap[s]=i;
                }
            }
        }
        return mxLen;
    }
    
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends
