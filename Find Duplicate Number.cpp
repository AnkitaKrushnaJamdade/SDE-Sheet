#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    
//     Sort the array first the linearly traverse and check it's next element:
    
//     TC: O(nlog(n) for sorting + O(n)) S.C=O(1)
//     sort(arr.begin(), arr.end());
//     for(int i=0;i<n-1;i++){
//         if(arr[i]==arr[i+1]){
//             return arr[i];
//         }
//     }
    
//     Create on extra array storing -1 then before insertion check if it's -1 if not then already one ele is their and curr is dup so return it
    
//  S.C=O(n) TC=O(n)
//     vector<int> vec(n+1,-1);
    
//     for(int i=0;i<n;i++){
//         if(vec[arr[i]]!=-1){
//             return arr[i]; 
//         }
//         else{
//             vec[arr[i]]=1;
//         }
//     }
    
//     Umap
//     unordered_map<int,int> umap;
//     for(auto i: arr){
//         umap[i]++;
//         if(umap[i]>1)
//             return i;
//     }
    
//     Tortoise algo
    
    int slow=arr[0], fast=arr[0];
    do{
        slow = arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    
    fast=arr[0];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
