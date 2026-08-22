class MyHashMap {
public:
    unordered_map<int,int>hash;
    unordered_map<int,bool>vis;
    MyHashMap() {        
    }
    
    void put(int key, int value) {
       hash[key]=value; 
       vis[key]=true;
    }
    
    int get(int key) {
        if(!vis[key] && !hash[key])return -1;
        return hash[key];
    }
    
    void remove(int key) {
        hash[key]=-1;
        vis[key]=false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */