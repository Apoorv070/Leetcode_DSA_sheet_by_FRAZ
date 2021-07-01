class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
	    int max_here = 1;
	    int min_here = 1;
	    for(int i=0;i<n;i++){
	        if(nums[i]>0){
	            max_here = max_here*nums[i];
	            min_here = min(1,min_here*nums[i]);
	        }else if(nums[i]<0){
	            long long temp = max_here;
	            max_here = max(1,min_here*nums[i]);
	            min_here = temp*nums[i];
	            
	        }else{
	           max_here = 1;
	           min_here = 0;
	        }
	        
	        maxi = max(maxi,max_here);
	    }
	    return maxi;
        
    }
};
