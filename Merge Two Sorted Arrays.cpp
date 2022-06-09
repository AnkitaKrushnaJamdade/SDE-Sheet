#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
   
//     My own Brute force approach:
//     vector<int> vec;
//     for(auto i: arr1){
//         if(i==0){
//             break;
//         }
//         else{
//             vec.push_back(i);
//         }
//     }
    
//     for(auto i: arr2){
//         vec.push_back(i);
//     }
    
//     sort(vec.begin(),vec.end());
    
//     return vec;
    
//     My own Better approach:
//     int j=0;
//     for(int i=m;i<m+n;i++){
//         arr1[i]=arr2[j];
//         j++;
//     }
//     sort(arr1.begin(), arr1.end());
//     return arr1;
    
//     In-place better sol:
    int secArrIdx=0,k,first;
    for(int i=0;i<m;i++){
        if(arr1[i]>arr2[secArrIdx]){
            swap(arr1[i],arr2[secArrIdx]);
//             Proper positioning of arr2 but as T.C=O(nlogn) give TLE
//             sort(arr2.begin(), arr2.end());
            
//             Optimal positioning:
            first=arr2[0];
            for (k = 1;k < n && arr2[k] < first;k++) {
                  arr2[k-1] = arr2[k];
             }
             arr2[k-1] = first;
        }
    }
    
    for(int i=m;i<m+n;i++){
        arr1[i]=arr2[i-m];
    }
    
    return arr1;
}
