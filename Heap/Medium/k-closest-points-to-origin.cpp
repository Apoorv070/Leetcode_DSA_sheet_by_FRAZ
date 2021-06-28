//https://leetcode.com/problems/k-closest-points-to-origin/
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < points.size(); i++) {
            int distSquare = pow(points[i][0], 2) + pow(points[i][1], 2);
            if (i < K) 
                pq.push( { distSquare, i } );
            else if (distSquare < pq.top().first) {
                pq.pop();
                pq.push( { distSquare, i } );
            }
        }
                 
        vector<vector<int>> vRet {};
        while (!pq.empty()) {
            vRet.push_back(points[pq.top().second]);
            pq.pop();
        }
        return vRet;
    }
};
