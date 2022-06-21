class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
//         Brute:
        set<int> s;
        
        for(auto i: nums)   s.insert(i);
        
        int i=0;
        
        for(auto j: s){
            nums[i++] = j;
        }
        
        return i;
        
//         My sol:
//         int n=nums.size();
        
//         int i=0, j, k=0;
        
//         while(i<n){
//             j = i;
//             while(j<n && nums[i] == nums[j]){
//                 j++;
//             }
//             nums[k++] = nums[i];
//             i = j;
//         }
        
//         return k;
    }
};
