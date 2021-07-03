class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low  = 0 ;
        int high = arr.size()-1;
        // if(arr[high]>arr[low])return high;
        // if(arr[low]>arr[high])return low;
        
        while(low<=high){
            int mid = (low+high)/2;
            //cout<<mid<<endl;
            if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
                return mid;
            else if(arr[mid]>arr[mid-1] and arr[mid]<arr[mid+1]){
                low = mid;
            }else{
               high = mid;
            }
        }
        return -1;
    }
};
