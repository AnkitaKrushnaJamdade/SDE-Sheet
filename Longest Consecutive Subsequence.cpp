class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
//         Brute force by using set
        // set<int> s;
        // if(nums.size()==1 || nums.size()==0)
        //     return nums.size();
        // for(auto i:nums)
        //     s.insert(i);
        // nums.resize(s.size());
        // int idx=0;
        // for(auto i: s){
        //     nums[idx]=i;
        //     idx++;
        // }
        // int len=1, mxLen=1;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]+1 == nums[i+1]){
        //         len++;
        //         mxLen=max(mxLen, len);
        //     }
        //     else{
        //         len=1;
        //     }
        // }
        // return mxLen;
        
//         Brute force:
//         int len=1, mxLen=1,i, n=nums.size();
//         if(n==0)
//             return 0;
        
//         sort(nums.begin(), nums.end());
        
//         int prev=nums[0];
        
//         for(i=1;i<n;i++){
//             if(nums[i]==prev+1){
//                 len++;
//                 mxLen=max(mxLen, len);
//             }  
//             else if(nums[i]==prev){
//                 prev=nums[i];
//             }
//             else if(nums[i]!=prev+1){
//                 len=1;                
//             }  
//             prev=nums[i];
//         }
              
//         return mxLen;
        
        
//         Optimal Approach:
        int n=nums.size(), i, len=1, mxLen=1;
        
        if(n==0)
            return 0;
        
        unordered_map<int,int> umap;
        
        for(auto i: nums)
            umap[i]++;
        
        for(auto i: umap){
            int prev=i.first-1;
            
            if(umap.find(prev)==umap.end()){
                int n=prev+1, len=0;
                while(umap.find(n)!=umap.end()){
                    len++;
                    n++;
                }
                mxLen=max(len, mxLen);
            }
        }
        
        return mxLen;
    }
};
