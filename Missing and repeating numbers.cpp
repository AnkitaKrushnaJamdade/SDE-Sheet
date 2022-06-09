#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
// 	Brute force:
//     pair<int,int> ans;
    
//     vector<int> vec(n+1, -1);
//     int rep, miss;
//     for(int i=0;i<n;i++){
//         if(vec[arr[i]]!=-1){
//             ans.second=arr[i];
//         }
//         vec[arr[i]]=1;
//     }
    
//     for(int i=1;i<=n;i++){
//         if(vec[i]==-1){
//             ans.first=i;
//             break;
//         }
//     }
    
//     return ans;
    
//     Optimal 1: Equation
    
//     calculate s', s'^2
    long long rSum=0, rSqSum=0;
    for(auto i:arr){
        rSum+=i;
        rSqSum += (i*i);
    }
//     cout<<rSum<<" rSum rSqSum "<<rSqSum<<endl;
//     calaculate s and s^2
    long long fSum=(n*(n+1))/2;
    long long fSqSum= (n*(n+1)*(2*n+1))/6;
//     cout<<fSum<<" fSum fSqSum "<<fSqSum<<endl;
    long long fSumMinusrSum=abs(fSum-rSum);
    long long fSqSumMinusrSqSum=abs(fSqSum-rSqSum);
//     cout<<fSumMinusrSum<<" fSumMinusrSum "<<fSqSumMinusrSqSum<<" fSqSumMinusrSqSum "<<endl;
//     X^2-Y^2=(X+Y)*(X-Y) we already know X-Y=fSumMinusrSum
    long long div=fSqSumMinusrSqSum/fSumMinusrSum;
//     cout<<div<<endl;
    long long X=(div+fSumMinusrSum)/2;
    long long Y=abs(div-X);
    
    
    return {X,Y};
}
