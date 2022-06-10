class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
//         Apply binary search on all elements seq. 'cuz they;re sorted row-wise: 1, 3,5,7,10,11,16,20,....
//         But we'll need extra space to store this 2d mat into 1d vec. To obtain the element's idx at particular idx(of binary seacrh we've formula)
        
        int st=0, mid;
        int m = mat.size(), n=mat[0].size(), end=(m*n)-1;
        if(m==1 && n==1){
            if(mat[0][0]==target)
                return true;
            return false;
        }
        
        while(st<=end){
            mid=st+(end-st)/2;
//             To obtain element at midth idx : row: mid/colNumber
            // col: mid%colNumber
            int r=mid/n, c=mid%n;
            if(mat[r][c]==target)
                return true;
            else if(mat[r][c]<target)
                st=mid+1;
            else
                end=mid-1;
        }
        
        return false;
    }
};
