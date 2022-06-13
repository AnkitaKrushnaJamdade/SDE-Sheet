class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
//         int n=nums.size();
//         vector<int> ans;

//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j] == target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
        
//         return ans;
        
        // Better Approach
        vector<int> ans;
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            int req = target-nums[i];
            if(umap.find(req)!=umap.end()){
                ans.push_back(i);
                ans.push_back(umap.find(req)->second);
                return ans;
            }
            else{
                umap[nums[i]] = i;
            }   
        }
        
        return ans;
        
//         for(auto i: umap){
//             int req=target-i.first;
            
//             if(umap.find(req)!=umap.end()){
//                 ans.push_back(i.second);
//                 ans.push_back(umap.find(req)->second);
//                 return ans;
//             }
//         }
//         return ans;
    }
};


// Coding Ninjas: Pair Sum:

// Problem Statement
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.



// #include <bits/stdc++.h> 
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.
    
// //     Brute force approach:
//     int n=arr.size();
//     sort(arr.begin(), arr.end());
//     vector<vector<int>> ans;
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == s)
//                 ans.push_back({arr[i], arr[j]});
//         }
//     }
//     return ans;
    
// //     unordered_map<int,int> umap;
    
// //     for(int i=0;i<arr.size();i++){
// //             umap[arr[i]]++;
// //     }
    
// //     vector<vector<int>> ans;
  
// //     // rbegin() returns to the last value of map
// //     for (auto i: umap) {
// //         int req = s-i.first;
        
// //         if(umap.find(req)!=umap.end()){
            
// //             int freq = max(umap.find(req)->second, i.second);
// //             while(freq--)
// //                 ans.push_back({umap.find(req)->first, i.first});
// // //             
// //                 umap.erase(umap[i.first]);
// //                 umap.erase(umap.find(req));            
// //         }
// //     }
// //     reverse(ans.begin(), ans.end());
// //     return ans;
    
// }
