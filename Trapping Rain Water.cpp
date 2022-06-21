class Solution {
public:
    int trap(vector<int>& height) {
        
//         Brute force:
//         int n = height.size();
        
//         int mxTrappedWater = 0;
        
//         for(int i=0;i<n;i++){
//             int mxL = 0, mxR = 0;
            
//             for(int k=0;k<=i;k++)
//                 mxL = max(mxL, height[k]);
                        
//             for(int k=i;k<n;k++)
//                 mxR = max(mxR, height[k]);
            
//             mxTrappedWater+=(min(mxR, mxL) - height[i]);
//         }
        
//         return mxTrappedWater;
        
//         Better :
        
//         int n=height.size(), mxTrappedwater = 0;
        
// //         Create prfixMax: maintain max sum from left
//         vector<int> prefixMx(n);
        
// //         Create suffixMx : Maintain Max sum from right
//         vector<int> suffixMx(n);
        
// //         Update both vecs
//         int mx=0;
//         for(int i=0;i<n;i++){
//             mx = max(height[i], mx);
//             prefixMx[i] = mx;
//         }
        
//         mx=0;
        
//         for(int i=n-1;i>=0;i--){
//             mx = max(height[i], mx);
//             suffixMx[i] = mx;
//         }
        
//         for(int i=0;i<n;i++){
//             mxTrappedwater += (min(prefixMx[i], suffixMx[i]) - height[i]);
//         }
        
//         return mxTrappedwater;
        
        
        
//         Opimal Approach:
        
        int n = height.size();
        
        int l=0, r = n-1, lMx = 0, rMx=0, mxTrappedWater = 0;
        
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l] > lMx)
                    lMx = height[l];
                else
                    mxTrappedWater += (lMx - height[l]);
                l++;
            }
            else{
                if(height[r] > rMx)
                    rMx = height[r];
                else
                    mxTrappedWater += (rMx- height[r]);
                r--;
            }
        }
        
        return mxTrappedWater;
    }
};
