//https://leetcode.com/problems/design-hashmap/

class MyHashMap {
  vector<pair<int,int>> data;
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        data.clear();
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        
      for(auto & el: data){
        if(el.first == key) {
          el.second = value;
          return;
        }
      }
      data.push_back(make_pair(key,value));        
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
      for(auto & el: data ) { 
        if(el.first == key)
          return el.second;        
      }
      return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
      int index = 0;
      for(auto & el: data ) {
        if(el.first == key){
          data.erase(data.begin() + index);
        
        }
        ++index;
      }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
