#include <bits/stdc++.h> 

int maximumProfit(vector<int> &arr){
    // Write your code here.
    int n=arr.size();
//     int mxProfit=0, currProfit;
//     Brute Force:
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 currProfit = arr[j]-arr[i];
//                 mxProfit = max(mxProfit, currProfit);
//             }
//             currProfit = arr[j]-arr[i];
//             mxProfit = max(mxProfit, currProfit);
//         }
//     }
    
//     return mxProfit;
    
    
//     Optimal SOL:
    int mn=arr[0], mxProfit=0;
    for(int i=1;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }
        else{
            int diff=arr[i]-mn;
            mxProfit=max(mxProfit, diff);
        }
    }
    return mxProfit;
}
