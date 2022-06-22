class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(), i=0, mxLen=0, len=0;
        
        while(i<n){
            if(nums[i] == 1)
                len++;
            else{
                mxLen = max(mxLen, len);
                len = 0;
            }
            i++;
        }
        return max(mxLen,len);
    }
};
