class Solution {
public:
    int merge(int lo, int mid, int hi, vector<int>& arr){
        int j=mid+1, cnt=0;
        
        for(int i=lo;i<=mid;i++){
            while(j<=hi && arr[i]>2LL*arr[j]){
                j++;
            }
            
            cnt+=(j-(mid+1));
        }
        
        int i=lo, k=lo;
        j=mid+1;
        int temp[arr.size()];
        while(i<=mid && j<=hi){
            if(arr[i]<arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
            }
        }
        
        while(i<=mid)
            temp[k++] = arr[i++];
        
        while(j<=hi)
            temp[k++] = arr[j++];
        
        for(i=lo;i<=hi;i++){
            arr[i] = temp[i];
        }
        
        return cnt;
    }
    int mergeSort(int lo, int hi, vector<int>& arr){
        if(lo < hi){
            int cnt=0;
            int mid = (lo+hi)/2;
            cnt+=mergeSort(lo, mid, arr);
            cnt+=mergeSort(mid+1, hi, arr);
            cnt+=merge(lo, mid, hi, arr);
            return cnt;
        }
        else{
            return 0;
        }
    }
    int reversePairs(vector<int>& arr) {
//         int cnt=0;
    
//         for(int i=0;i<arr.size()-1;i++){
//             for(int j=i+1;j<arr.size();j++){
//                 if(arr[i] > arr[j]*2LL)
//                     cnt++;
//             }
//         }

//         return cnt;
        
        return mergeSort(0, arr.size()-1, arr);
    }
};
