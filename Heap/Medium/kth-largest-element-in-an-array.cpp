//https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& A, int B) {
priority_queue<int> pq;
for(int i=0;i<A.size();i++){
pq.push(A[i]);
}

for(int i=1;i<B;i++){

pq.pop();
}

        
        return pq.top();
        
    }
    
};
