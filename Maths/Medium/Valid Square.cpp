class Solution {
public:
    
    int dist(vector<int> &p1, vector<int> &p2) {
        return pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2);
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int> line_lengths;
        vector<vector<int>> points = {p1, p2, p3, p4};
        
        for(int i = 0; i < points.size(); i++) {
            for(int j = 0; j < points.size(); j++)
                if(i != j)
                    line_lengths.insert(dist(points[i], points[j]));
        }

        return line_lengths.size() == 2 && *(line_lengths.begin()) != 0;
    }
};
