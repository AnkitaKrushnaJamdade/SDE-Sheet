class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
//         Brute Force Solution:
        int n=matrix.size(), col=n-1;
        vector<vector<int>> matrix2(n, vector<int> (n));
        
        for(auto i: matrix){
            int rowIdx=0;
            for(auto j:i){
                matrix2[rowIdx][col]=j;
                rowIdx++;
            }
            col--;
        }
        
        matrix=matrix2;
        // Optimal SOl:
//         int n=matrix.size();
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<i;j++)
//                 swap(matrix[i][j], matrix[j][i]);
//         }
        
//         for(int i=0;i<n;i++){
//             reverse(matrix[i].begin(), matrix[i].end());
//         }
    }
};
