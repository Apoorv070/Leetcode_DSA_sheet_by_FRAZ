class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int B) {
    int r = A.size();
    int c = A[0].size();
    int i;
    for(i = 0 ; i < r ; ){
        if(A[i][c-1]>B){
            break;
        }else if(A[i][c-1]==B){
            return 1;
        }else{
            i++;
        }
    }
    if(i==r){
        return 0;
    }
    return binary_search(A[i].begin(),A[i].end(),B);
    
    }
};

