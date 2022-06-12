#include <bits/stdc++.h> 
int solve(int i, int j, int m, int n){
    if(i==m-1 && j==n-1)
        return 1;
    else if(i>=m || j>=n)
        return 0;
    else
        return solve(i+1, j, m, n) + solve(i, j+1, m, n);
}
// int solve(int i, int j, int m, int n,  vector<vector<int>> &dp){
//     if(i==m-1 && j==n-1){
//         return 1;
//     }
//     else if(dp[i][j]!=-1){
//         return dp[i][j];
//     }
//     else if(i==m-1 || j == n-1){
//         int cnt=0;
//         if(j==n-1)
//             cnt+=solve(i+1,j,m,n, dp);
//         else
//             cnt+=solve(i,j+1,m,n, dp);
//         dp[i][j]=cnt;
//         return cnt;
//     }
//     else{
// //     Go to right
//         int cnt=0;
//     cnt+=solve(i, j+1, m,n, dp);
    
// //     Go to left
//     cnt+=solve(i+1, j, m,n, dp);
//         dp[i][j]=cnt;
//         return cnt;
//     }
// }
int uniquePaths(int m, int n) {
	// Write your code here.
    if(n==1 || m==1)
        return 1;
//     int cnt=0;
//     vector<vector<int>> dp(m, vector<int> (n,-1));
    return solve(0,0,m,n);
}
