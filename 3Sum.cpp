class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
//         Brute force approach:
//         int n=nums.size();
//         set<vector<int>> ans;
        
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int req = 0-(nums[i] + nums[j]);
//                 for(int k=j+1;k<n;k++){
//                     if(nums[k]==req){
//                         ans.insert({nums[i], nums[j], nums[k]});
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> res;
        
//         for(auto  i: ans)
//             res.push_back(i);
//         return res;
        
        
        
//         Better Approach: using hashing
        
//         unordered_map<int,int> umap;
                
//         set<vector<int>> s;
        
//         int n = nums.size();
        
//         for(auto i:nums)
//             umap[i]++;
        
//         for(int i=0;i<n;i++){
// //             Reduce the freq of nums[i] as we don't want to consider an element twice if it's freq is 1. i.e. not nums[i] should be considered for nums[j] or the third element even thogh it's present only once in the nums array.
            
//             umap[nums[i]]--;
            
//             if(umap[nums[i]]==0)
//                 umap.erase(umap.find(nums[i]));
            
//             for(int j=i+1;j<n;j++){
//                 umap[nums[j]]--;
                
//                 if(umap[nums[j]]==0)
//                     umap.erase(umap.find(nums[j]));
                
//                 int req = 0-(nums[i]+nums[j]);
                
//                 if(umap.find(req)!=umap.end()){
//                     vector<int> arr = {nums[i], nums[j], req};
                    
//                     sort(arr.begin(), arr.end());
                    
//                     s.insert(arr);
                                       
//                 }
//                 umap[nums[j]]++;
//             }
            
//             umap[nums[i]]++;
            
//         }
                             
//         vector<vector<int>> ans;
                             
//         for(auto i: s)
//             ans.push_back(i);
//         return ans;    
                     
        
        
//         Optimal Approach: two ptr approach
        
        int n=nums.size();
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        
        // vector<int> temp;
        
        int i=0,lo=i+1,hi=n-1,req,cnt=0;
        
        while(i<n-2){
            if(i == 0 || (i>0 && nums[i]!=nums[i-1])){
                lo=i+1;
                hi=n-1;
                int req=0-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==req){
                        ans.push_back({nums[i], nums[lo], nums[hi]});
                    
                        while(lo<hi && nums[lo]==nums[lo+1])
                            lo++;
                        while(hi>lo && nums[hi]==nums[hi-1])
                            hi--;
                        lo++;
                        hi--;
                    }
                    else if(nums[lo]+nums[hi]<req)  //3<2 //need to reduce the sum so reduce hi
                        lo++;
                    else
                        hi--;
                }
            }
            i++;
        }
        
        
        return ans;
    }
};
