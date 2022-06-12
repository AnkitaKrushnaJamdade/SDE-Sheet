#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
//     Brute force approach:
    set<int> vec;
    double n=arr.size(), val=floor(n/3);
    int freq;
    for(int i=0;i<n;i++){
        freq=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                freq++;
        }
        if(freq>val)
            vec.insert(arr[i]);
    }
    vector<int> vec2;
    for(auto i:vec)
        vec2.push_back(i);
    return vec2;
    
//     Better Approach:
//     unordered_map<int,int> ump;
    
//     for(auto i:arr)
//         ump[i]++;
    
//     double n=arr.size(), val=floor(n/3);
//     vector<int> ans;
//     for(auto i:ump){
//         if(i.second>val)
//             ans.push_back(i.first);  
//     }
//     return ans;
}
