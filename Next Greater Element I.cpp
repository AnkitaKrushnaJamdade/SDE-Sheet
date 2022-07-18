// Leetcode Brute force:


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        // Brute force approach:
        vector<int> ans;
        
        for(auto i:nums1){
            int flg=0;
            for(int j=0;j<nums2.size();j++){
                if(i == nums2[j]){
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>i){
                            flg=1;
                            ans.push_back(nums2[k]);
                            break;
                        }
                    }
                    if(!flg)
                        ans.push_back(-1);
                    break;
                }
            }
        }
            
        return ans;
        

    }
};


// Coding ninjas better:

// #include<stack>
// #include<algorithm>
// vector<int> nextGreater(vector<int> &arr, int n) {
//     // Write your code here
    
//     vector<int> ans;
    
//     stack<int> st;
    
//     for(int i=n-1;i>=0;i--){
//         if(st.empty()){
//             ans.push_back(-1);
//             st.push(arr[i]);
//         }else if(st.top() > arr[i]){
//             ans.push_back(st.top());
//             st.push(arr[i]);
//         }else{
//             while(!st.empty() && st.top()<=arr[i]){
//                 st.pop();
//             }
            
//             if(st.empty()){
//                 ans.push_back(-1);
//                 st.push(arr[i]);
//             }else{
//                 ans.push_back(st.top());
//                 st.push(arr[i]);
//             }
//         }        
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;

// }
