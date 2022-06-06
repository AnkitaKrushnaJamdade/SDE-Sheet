#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    
    My First Solution
    int ro=matrix.size(), col=matrix[0].size();
    
    set<pair<int,int>> idx;
    
    for(int i=0;i<ro;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                idx.insert({i,j});
            }
        }
    }
    
    for(auto i:idx){
        int rows=i.first, cols = i.second;
        for(int j=0;j<col;j++){
            matrix[rows][j] = 0;
        }
        
        for(int j=0;j<ro;j++){
            matrix[j][cols] = 0;
        }
    }
    
    
    
//     Brute Force Approach implementation:
//     int row = matrix.size(), col = matrix[0].size();
    
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(matrix[i][j] == 0){
// //                 Setting all row to -1 except 0's itself
//                 for(int k=0;k<col;k++){
//                     if(matrix[i][k] != 0){
//                         matrix[i][k] = -1;
//                     }
//                 }
                
// //                 Setting all column to -1 except 0
//                 for(int k=0;k<row;k++){
//                     if(!(matrix[k][j] == 0)){
//                         matrix[k][j] = -1;
//                     }
//                 }
//             }
//         }
//     }
    
//     for(int i=0;i<row;i++){
//         for(auto j=0;j<col;j++){
//             if(matrix[i][j]==-1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
    
    
    
//     Better Solution Approach:
//     int row = matrix.size(), col = matrix[0].size();

//     vector<int> r(row, -1);
//     vector<int> c(col, -1);
    
//     for(int i=0;i<row;i++){
//         for(auto j=0;j<col;j++){
//             if(matrix[i][j]==0){
// //                 If element is zero then mark it's corresponding idx as 0
//                 r[i] = 0;
//                 c[j] = 0;
//             }
//         }
//     }
    
//     for(int i=0;i<row;i++){
//         for(auto j=0;j<col;j++){
//             if(r[i] == 0 || c[j] == 0){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
}
