class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
//         Brute force:
        int mxLen=1, n=s.size(),j;
        
        if(n==0)
            return 0;
        
        // unordered_map<char,int> umap;
        // for(int i=0;i<n;i++){            
        //     for(j=i;j<n;j++){
        //         if(umap.find(s[j])!=umap.end()){
        //             mxLen=max(mxLen, (j-i));
        //             break;
        //         }
        //         else{
        //             umap[s[j]]++;
        //             mxLen=max(mxLen, (j-i+1));
        //         }
        //     }
        //     umap.clear();
        // }
        
        
//         Better Approach:
//         int l=0, r=0;
        
//         set<int> chSet;
        
//         while(l<n && r<n){
// //             If element is already present:
//             if(chSet.find(s[r])!=chSet.end()){
// //                 Iterate until that redundant element isn't there in set                
//                 while(chSet.find(s[r])!=chSet.end()){
//                     chSet.erase(s[l]);
//                     l++;
//                 }
//             }
//             else{
//                 mxLen=max(mxLen, (r-l+1));
//                 chSet.insert(s[r]);
//                 r++;
//             }
//         }
        
        
//         return mxLen;
        
//         Optimal Approach:
        
        unordered_map<char, int> umap;
        int l=0, r=0;
        while(l<n && r<n){
            if(umap.find(s[r])!=umap.end() && (umap[s[r]]>=l && umap[s[r]]<r)){
                l=umap[s[r]]+1;
                umap[s[r]]=r;
                r++;
                // mxLen=max()
            }
            else{
                mxLen=max(mxLen, (r-l+1));
                umap[s[r]]=r;
                r++;
            }
        }
        
        return mxLen;
    }
};
