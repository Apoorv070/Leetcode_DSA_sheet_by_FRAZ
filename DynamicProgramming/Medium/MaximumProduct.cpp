class Solution {
public:
    int maxProduct(vector<int>& A) {
		int maxDP = A[0];
        int minDP = A[0];
        int max_elem = A[0];
        for(int i=1;i<A.size();i++){
            if(A[i]>=0){
                maxDP = max(A[i], maxDP*A[i]);
                minDP = min(A[i], minDP*A[i]);
            }
            else{
                int maxDP_old = maxDP;
                maxDP = max(A[i], minDP*A[i]);
                minDP = min(A[i], maxDP_old*A[i]); 
            }
            max_elem = max(max_elem, maxDP);
        }
        return max_elem;
        
    }
};
