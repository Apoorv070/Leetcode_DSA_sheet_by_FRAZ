class Solution {
public:
    set<vector<int> > globalBox;
    void  getSubset(vector<int>&v,int idx,vector<int> &A,int n, int B){
    if(B<0)
        return;
    if(B == 0){
        globalBox.insert(v);
        return;
    }
    for(int i=idx;i<n;i++){
        if(i>=0){
            v.push_back(A[i]);
            getSubset(v,i+1,A,n,B-A[i]);
            v.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum2(vector<int>& A, int B) {
    vector<int>v;
    sort(A.begin(),A.end());
    getSubset(v,0,A,A.size(),B);
    //v.clear();
    return vector<vector<int>>(globalBox.begin(),globalBox.end());
        
    }
};
