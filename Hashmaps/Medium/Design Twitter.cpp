//https://leetcode.com/problems/design-twitter/

class Twitter {
public:
    /** Initialize your data structure here. */
    stack<pair<int,int>>mp;
    map<int,set<int>>mp1;
    Twitter() {
        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        mp.push({userId, tweetId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        int cnt = 0;
        vector<int>res;
        stack<pair<int,int>>tmp = mp;
        while(cnt!=10 && !tmp.empty()){
            pair<int, int> x = tmp.top();
            if(x.first==userId || mp1[userId].find(x.first)!=mp1[userId].end()){
                cnt++;
                res.push_back(x.second);
            }
            tmp.pop();
        }
        return res;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        mp1[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        mp1[followerId].erase(followeeId);
    }
};
