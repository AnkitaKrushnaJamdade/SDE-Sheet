#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long currSum = 0 , mxSum = 0;
    
//     for(int i=0;i<n;i++){
//         currSum = arr[i];
//         mxSum = max(mxSum, currSum);
//         for(int j=i+1;j<n;j++){
//             currSum += arr[j];
//             mxSum = max(mxSum, currSum);
//         }
//     }
    
//     return mxSum;
    
    for(int i=0;i<n;i++){
        currSum += arr[i];
        mxSum = max(mxSum, currSum);
        if(currSum < 0){
//             mxSum = max(mxSum, currSum);
            currSum = 0;
        }
//         mxSum = max(mxSum, currSum);
    }
    return mxSum;
}
