class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //first sort the intervals
        sort(intervals.begin(),intervals.end());

        int count=0;
        int i=0;
        int j=1;
        int n=intervals.size();
        while(j<n){

            if(intervals[i][1]<=intervals[j][0])
            {
                
                i=j;
                j++;
            }
            else if(intervals[i][1]>=intervals[j][1])
            {

                count+=1;
                i=j;
                j++;
            }
            else if(intervals[i][1]>intervals[j][0])
            {
                count+=1;
                j++;
            }
        }
        return count;
    }
};
