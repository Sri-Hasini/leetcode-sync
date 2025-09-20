class OrderedStream {
public:
    vector<string>a;
    int p=1;
    OrderedStream(int n) {
        a.resize(n+1);
    }
    
    vector<string> insert(int idKey, string value) {
        a[idKey]=value;
        vector<string>t;
        while(p<a.size()) {
            if(a[p]=="") break;
            t.push_back(a[p++]);
        }
        return t;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */