#include <bits/stdc++.h> 
long long merge(long long *arr, int temp[], int left, int mid, int right){
    long long cnt=0, i=left,j=mid+1, k=left;
    while((i <= mid) && (j <= right)){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            cnt = cnt + (mid - i+1);
            j++;
        }
        k++;
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= right)
        temp[k++] = arr[j++];

    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];
    
    return cnt;
}


long long mergeSort(long long *arr, int temp[],int left, int right){
    long long cnt=0;
    if(left < right){
        int mid=(left+right)/2;
        cnt+=mergeSort(arr, temp,left, mid);
        cnt+=mergeSort(arr, temp,mid+1, right);
        
        cnt+=merge(arr, temp, left, mid, right);
    }
    
    return cnt;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    
//     Brute force:
//     long long cnt=0;
//     for(int i=0;i<n;i++){
//         for (int j=i+1;j<n;j++){
//             if(arr[i]>arr[j])
//                 cnt++;
//         }
//     }
    
//     return cnt;
    
    
//     Optimal:
    int temp[n];
    return mergeSort(arr, temp, 0, n-1);
}
