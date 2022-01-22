class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        auto pos=s.find(val);
        if(pos==s.end()){
            s.insert(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        auto pos=s.find(val);
        if(pos!=s.end()){
            s.erase(pos);
            return true;
        }
        return false;
    }
    
    int getRandom() {
    auto it = s.cbegin();
    int random = rand() % s.size();
    advance(it, random);
    return *it;    
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */