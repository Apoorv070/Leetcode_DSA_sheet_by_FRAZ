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

//Optimised
class Solution {
public:
struct compare
{
    bool operator()(const pair<int,pair<int, int> >& a, const pair<int,pair<int, int> >& b)
    {
        return a.first>b.first;
    }
};
    int kthSmallest(vector<vector<int>>& arr, int k) {
        
        int n=arr.size(),m=arr[0].size();
        
        priority_queue< pair<int,pair<int, int> >, vector<pair<int, pair<int, int> > >, compare > p;
        
        for(int i=0;i<n;i++)
        p.push(make_pair(arr[i][0],make_pair(i,0)));
        
        int x=k,ans;
        while(x--)
        {
            int e=p.top().first;
            int i=p.top().second.first;
            int j=p.top().second.second;
            ans=e;
            p.pop();
            if(j!=m-1)
            p.push(make_pair(arr[i][j+1],make_pair(i,j+1)));
        }
        return ans;
        
    }
};
