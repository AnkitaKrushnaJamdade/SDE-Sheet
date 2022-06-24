// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool cmp(struct Item i1, Item i2){
    double ratio1 = double(i1.value) / double(i1.weight);
    double ratio2 = double(i2.value) / double(i2.weight);
    if(ratio1 > ratio2)    return true;
    return false;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        if(n == 1){
            if(arr[0].weight < w)
                return arr[0].value;
        }
        
        sort(arr, arr+n, cmp);
        
        double fVal = 0, fWt = 0;
        
        int i=0;
        
        while(fWt<w && i<n){
            if((fWt + arr[i].weight) <= w){
                fWt += arr[i].weight;
                fVal += arr[i].value;
            }else{
                double need = w - fWt;
                double val = (double(arr[i].value)/double(arr[i].weight))*need;
                fVal+=val;
                fWt+=need;
                break;
            }
            i++;
        }
        
        return fVal;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends
