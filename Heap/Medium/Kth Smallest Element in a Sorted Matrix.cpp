//https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> s;
        int n = matrix.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                s.push_back(matrix[i][j]);
            }
            
        }
        sort(s.begin(),s.end());
        int val = 1;
        for(auto it:s){
            if(val==k)
                return it;
            val++;
        }
        
        return -1;
    }
};
