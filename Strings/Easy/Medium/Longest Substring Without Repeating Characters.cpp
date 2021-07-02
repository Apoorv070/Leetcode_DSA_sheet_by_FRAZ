class Solution {
public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.length();
//         if(n==0)
//             return 0;
//         int max_ans = INT_MIN;
//         vector<int> v(255,0);
//         for(int i = 0 ; i < n ; i++){
//             int ans = 0;
//             int j = i;
//             while(j<n&&v[s[j]]==0){
//                 ans++;
//                 v[s[j]]++;
//                 j++;
//             }
//             fill(v.begin(),v.end(),0);
//             //cout<<ans<<endl;
//             max_ans = max(max_ans,ans);
//         }
        
//         return max_ans;
//     }
        int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0)
            return 0;
        set<char> st;
        int maxsize=0;
        int i=0,j=0;
        while(j<n)
        {
            if(st.count(s[j])==0)
            {
                st.insert(s[j]);
                maxsize=max(maxsize,(int)st.size());
                j++;
            }
            else
            {
                st.erase(s[i]);
                i++;
            }
        }
        return maxsize;
    }
};
