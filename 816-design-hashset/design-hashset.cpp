class MyHashSet {
public:
    vector <int> a;
    MyHashSet() {
        a.resize(0);
    }
    
    void add(int key) {
        if (contains(key)) return;
        a.push_back(key);
    }
    
    void remove(int key) {
        if (!contains(key)) return;
        vector <int> x;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == key) continue;
            x.push_back(a[i]);
        }
        a = x;
    }
    
    bool contains(int key) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == key) return true;
        }
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