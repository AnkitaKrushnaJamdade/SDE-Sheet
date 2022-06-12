#include <bits/stdc++.h> 
int modularExponentiation(long long x, long long n, long long m) {
	// Write your code here.
    long long ans=1;
    
//     if(n<0)    n=-1*n;
    
    while(n!=0){
        if(n%2){
            ans=(ans*x%m)%m;
            n=n-1;
        }
        else{
            x=(x%m*x%m)%m;
            n /=2;
        }
    }
    
    ans=ans%m;
    return ans;
}
