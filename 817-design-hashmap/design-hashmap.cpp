class MyHashMap {
public:
    vector <pair<int,int>> m;
    MyHashMap() {
        m.resize(0);
    }
    
    int there(int key) {
        for (int i = 0; i < m.size(); i++) {
            if (m[i].first == key) return i;
        }
        return -1;
    }

    void put(int key, int value) {
        int ind = there(key);
        if (ind != -1) {
            m[ind].second = value;
        } 
        else m.push_back({key, value});
    }
    
    int get(int key) {
        int val = there(key);
        if (val != -1) return m[val].second;
        return val;
    }
    
    void remove(int key) {
        vector <pair<int,int>> v;
        for (int i = 0; i < m.size(); i++) {
            if (m[i].first == key) continue;
            v.push_back({m[i].first, m[i].second});
        }
        m = v;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */