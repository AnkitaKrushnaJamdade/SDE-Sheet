#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    
//     Brute force:
//     int len=0, n=arr.size(), xorOp;
//     for(int i=0;i<n;i++){
//         xorOp=0;
//         for(int j=i;j<n;j++){
//             xorOp^=arr[j]; 
//             if(xorOp==x){
//                 len++;
//             }                       
//         }
//     }
//     return len;
    
    
//     Optimal Sol:
    
     int len=0, xorOp=0;
    
    unordered_map<int,int> umap;
    
    for(auto i: arr){
        xorOp = xorOp^i;
        if(xorOp==x){
            len++;
        }
        if(umap.find(xorOp^x)!=umap.end()){
            len+=umap[xorOp^x];
        }
        umap[xorOp]+=1;
    }
    return len;
}
