class MyHashSet {
public:
    set<int> arr;
    MyHashSet() {
    }
    
    void add(int key) {
        arr.insert(key);
    }
   
    
    void remove(int key) {
        arr.erase(key);
    }
    
    bool contains(int key) {
        auto it = arr.find(key);
        if(it != arr.end())
           return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
