//https://leetcode.com/problems/insert-delete-getrandom-o1/
class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,bool> mp;
    RandomizedSet() {
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mp.find(val) == mp.end()){
            mp[val] = true;
            return true;
        }
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(mp.find(val) != mp.end()){
            mp.erase(val);
            return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        auto it = mp.begin();
        advance(it, rand() % mp.size());
        return it -> first;
    }
};
