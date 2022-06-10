#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    
//     Linearly Search: Brute Force
//     for(auto i: mat){
//         for(auto j: i){
//             if(j==target)
//                 return true;
//         }
//     }
//     return false;
    
    
//     Better Approach:
//     int  mid, st, end;
        
//         if(n==1 && m==1){
//             if(mat[0][0]==target)
//                 return true;
//             return false;
//         }
        
//         if(n==1){
//             for(int i=0;i<m;i++){
//                 if(mat[i][0]==target)
//                     return true;
//             }
//             return false;
//         }
        
//         for(int i=0;i<m;i++){
//             mid=n/2;
//             st=0;end=n-1;

//             while(st<=end){
//                 if(mat[i][mid]==target)
//                     return true;
//                 else if(mat[i][mid]<target)
//                     st=mid+1;
//                 else
//                     end=mid-1;
//                 mid=(st+end)/2;
//             }
//         }

//     return false;
    
    
    int rowIdx=0, colIdx=n-1;
    
    while(rowIdx<m && colIdx>=0){ //Doesn't cross boundries
//         Element is found
        if(mat[rowIdx][colIdx]==target){ // If element is found
            return true;
        }
        else if(mat[rowIdx][colIdx]<target){  // If element is lesser that target then need to move to next row because there we won't get answer
            rowIdx++;
        }
        else{
//             If element is greater than target then mv to check previous elements that element
            colIdx--;
        }      
        
    }
    
    return false;
            
}
