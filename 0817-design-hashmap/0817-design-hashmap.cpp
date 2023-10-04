class MyHashMap {
public:
    int map[1000001];
    MyHashMap() {
        fill(map,map+1000001,-1);
    }
    
    void put(int key, int value) {
       map[key] = value;
    }
    
    int get(int key) {
        int res =-1;
        map[key]!= -1 ? res = map[key] :res = -1;
        return res;
    }
    
    void remove(int key) {
        if(map[key]!=-1) map[key] =-1;
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */