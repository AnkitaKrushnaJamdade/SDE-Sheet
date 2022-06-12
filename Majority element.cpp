#include <bits/stdc++.h> 
int findMajorityElement(int arr[], double n) {
	// Write your code here.
    
//     Brute force approach:
    int cnt=0, ele;
    for(int i=0;i<n;i++){
        if(cnt==0){
            ele=arr[i];
        }
        if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    if(cnt==1 || cnt==0)
        return -1;
    else
        return ele;
    
//     Better approach:
//     unordered_map<int,int> umap;
//     for(int i=0;i<n;i++){
//         umap[arr[i]]++;
//     }
//     double val = floor(n/2);
//     for(auto i:umap){
//         if(i.second>val)
//             return (i.first);
//     }
    
//     return -1;
}
