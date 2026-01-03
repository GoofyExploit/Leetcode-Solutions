// Last updated: 1/3/2026, 6:25:53 PM
class MyHashSet {
private:
    vector<bool> data;
public:
    MyHashSet() {
        data.resize(1000001, false);
    }
    
    void add(int key) {
        data[key] = true;
    }
    
    void remove(int key) {
        data[key] = false;
    }
    
    bool contains(int key) {
        return data[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */