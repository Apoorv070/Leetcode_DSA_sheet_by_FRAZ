class Solution {
public:
    bool ok(int mid,vector<int>& v,int days){
        
        bool check = true;
        int d = 1;
        int wt = 0;
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i]>mid)check = false;
            if(v[i]+wt<=mid){
                wt = v[i]+wt;
            }else{
                d++;
                wt = v[i];
            }
        }
        
        if(check==false)return false;
        return (d<=days);
    }
    int shipWithinDays(vector<int>& v, int days) {
        
        int max_ele = *max_element(v.begin(),v.end());
        int low = max_ele;
        int high = accumulate(v.begin(),v.end(),0);
        while(low<high){
            int mid = low + (high-low)/2;
            if(ok(mid,v,days)){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return high;
    }
};
