#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
//     int arr2[n];
//     map<int,int> mp;
    
//     for(int i=0;i<n;i++){
//         mp[arr[i]]++;
//     }
    
//     int j=0;
//     for(auto i: mp){
//         int freq=i.second, ele = i.first;
//         while(freq--){
//             arr[j]=ele;
//             j++;
//         }
//     }
  
//   3 pointer approach:
    int lo=0, mid=0, hi=n-1;
    while(mid<=hi){
        if(arr[mid]==0){
            swap(arr[lo], arr[mid]);
            lo++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid], arr[hi]);
            hi--;
        }
    }
}
