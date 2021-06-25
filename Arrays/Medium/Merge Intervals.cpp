//https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>> ni;
      if(intervals.size()==0){
          return ni;
      }
      sort(intervals.begin(),intervals.end());
      pair<int,int> p;
      p.first = intervals[0][0];
      p.second = intervals[0][1];
      for(int i = 1;i<intervals.size();i++){
          if(p.second>=intervals[i][0]){
              p.second = max(p.second,intervals[i][1]);
          }else{
              vector<int> v;
              v.push_back(p.first);
              v.push_back(p.second);
              ni.push_back(v);
              p.first = intervals[i][0];
              p.second = intervals[i][1];   
          }
      }
      vector<int> v;
      v.push_back(p.first);
      v.push_back(p.second);
      ni.push_back(v);
      return ni;
    }
};
