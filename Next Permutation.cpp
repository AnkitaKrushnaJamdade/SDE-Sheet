#include <bits/stdc++.h> 

void rev(vector<int> &permutation, int st){
    int end = permutation.size()-1;
    while(st<end){
        swap(permutation[st], permutation[end]);
        st++;
        end--;
    }
}
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
//     next_permutation(permutation.begin(), permutation.end());
//     return permutation;
    
    int idx1=-1, idx2=-1;
    if(n==1)
        return permutation;
    
    for(int i=n-2;i>=0;i--){
        if(permutation[i]<permutation[i+1]){
            idx1 = i;
            break;
        }
    }
    
    if(idx1==-1){
        sort(permutation.begin(), permutation.end());
        return permutation;
    }
    for(int i=n-1;i>=0;i--){
        if(permutation[i]>permutation[idx1]){
            idx2 = i;
            break;
        }
    }
    
    swap(permutation[idx1], permutation[idx2]);
    
    rev(permutation, idx1+1);
    
    return permutation;
}
