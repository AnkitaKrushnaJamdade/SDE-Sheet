void printAllSub(int idx, vector<int>& nums, int n, vector<int>& temp, set<vector<int>> &ans){
    if(idx == n){
        ans.insert(temp);
        return;
    }
    
    temp.push_back(nums[idx]);
    printAllSub(idx+1, nums, n, temp, ans);
    
    temp.pop_back();
    printAllSub(idx+1, nums, n, temp, ans);
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int N = nums.size();
        
        sort(nums.begin(), nums.end());
        
        vector<int> temp;
        
        set<vector<int>> ans;
        
        printAllSub(0, nums, N, temp, ans);
        vector<vector<int>> vec;
        for(auto i: ans)
            vec.push_back(i);
        return vec;
    }
};
