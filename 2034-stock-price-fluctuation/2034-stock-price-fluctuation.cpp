class StockPrice {
public:
     multiset<int>s;
    map<int,int>m;
    int latest;
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(m.find(timestamp)!=m.end()){
         auto itr = m.find(timestamp)->second;
             s.erase(s.find(itr));
             m[timestamp]=price;
             s.insert(price);
             return;
        }
         s.insert(price);
        m[timestamp]=price;
    }
    
    int current() {
        return m.rbegin()->second;
    }
    
    int maximum() {
        return *(s.rbegin());
    }
    
    int minimum() {
        return *(s.begin());
    }
};

/**
 * Your StockPrice object will be instantiated and called as such:
 * StockPrice* obj = new StockPrice();
 * obj->update(timestamp,price);
 * int param_2 = obj->current();
 * int param_3 = obj->maximum();
 * int param_4 = obj->minimum();
 */