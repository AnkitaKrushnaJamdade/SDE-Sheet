class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
//         My brute force:
//         set<vector<int>> res;
        
//         sort(nums.begin(), nums.end());
        
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 for(int k=j+1;k<n;k++){
//                     long long req = target - (nums[i]+nums[j]+nums[k]);
//                     for(int l=k+1;l<n;l++){
//                         if(nums[l]==req){
//                             res.insert({nums[i], nums[j], nums[k], nums[l]});
//                             // return res;
//                         }
//                     }
//                 }
//             }
//         }
//         vector<vector<int>> ans;
        
//         for(auto i: res){
//             ans.push_back(i);
//         }
        
//         return ans;
        
//         Striver's brute force approach: 3ptr and binary search
        
//         sort(nums.begin(), nums.end());
//         int n=nums.size(), i, j, k;
//         vector<vector<int>> ans;
        
//         set<vector<int>> s;
        
//         for(i=0;i<n-3;i++){
//             for(j=i+1;j<n-2;j++){
//                 for(k=j+1;k<n-1;k++){
//                     int req=target-((long long)nums[i]+(long long)nums[j]+(long long)nums[k]);
                    
//                     int st=k+1, end=n-1, mid;
//                     while(st<=end){
//                         mid=(st+end)/2;
                        
//                         if(nums[mid]==req){
//                             s.insert({nums[i], nums[j], nums[k], req});
//                             break;
//                         }
//                         else if(nums[mid]<req)
//                             st=mid+1;
//                         else
//                             end=mid-1;
//                     }
//                 }
//             }
//         }
            
//     for(auto i: s)
//         ans.push_back(i);
//     return ans;
//     }
        
//         Optimal Approach: 2ptr+ 3sum approach
        sort(nums.begin(), nums.end());
        int n=nums.size(), i, j, lo, hi, req;
        vector<vector<int>> ans;
        
        vector<vector<int>> s;
        
        for(i=0;i<n-3;i++){
            for(j=i+1;j<n-2;j++){
                lo=j+1;
                hi=n-1;
                while(lo<hi){
                    req = ((long long)nums[i]+(long long)nums[j]+(long long)nums[lo]+(long long)nums[hi]);
                    if(req==target){
                        s.push_back({nums[i],nums[j],nums[lo],nums[hi]});
                        while(lo<hi && nums[lo]==nums[lo+1]){
                            lo++;
                        }
                        while(lo<hi && nums[hi]==nums[hi-1])
                            hi--;
                        hi--;
                        lo++;
                    }
                    else if(req<target)
                        lo++;
                    else
                        hi--;
                }
                while(j<n-2 && nums[j]==nums[j+1])
                    j++;
            }
            while(i<n-3 && nums[i]==nums[i+1])
                i++;
        }
        
        for(auto i:s)
            ans.push_back(i);
        
        return ans;
    }
        
    
};
