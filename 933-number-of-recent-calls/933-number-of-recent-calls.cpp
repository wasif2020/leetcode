class RecentCounter {
public:
    multiset<int>ms;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        ms.insert(t-3000);
        ms.insert(t);
        auto itr=ms.find(t-3000);
        int num = std::distance(itr, ms.end());
        return num-1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */