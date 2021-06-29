class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        priority_queue<int> pq1,pq2;
        pair<int,int> * helper = new pair<int,int>[n];
        for(int i = 0 ; i < n ; i++){

            if(i==0){
                helper[i].first = 0;
                pq1.push(height[i]);
                continue;
            }
            
            if(pq1.top()<height[i]){
                helper[i].first = 0;
                pq1.push(height[i]);
                continue;
            }
            helper[i].first = pq1.top(); 
            pq1.push(height[i]);
        }
        for(int i = n-1 ; i >= 0  ; i--){

            if(i==(n-1)){
                helper[i].second = 0;
                pq2.push(height[i]);
                continue;
            }
            if(pq2.top()<height[i]){
                helper[i].second = 0;
                pq2.push(height[i]);
                continue;
            }
            helper[i].second = pq2.top(); 
            pq2.push(height[i]);
        }
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(i==0||i==n-1){
                continue;
            }
            
            if(helper[i].first==0||helper[i].second==0)
            continue;
            ans += (min(helper[i].second , helper[i].first)-height[i]);
        }
        return ans;
        
    }
};
