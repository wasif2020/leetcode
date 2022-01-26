class MinStack {
public:
     multiset<int>s;
    vector<int>v;
    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
        s.insert(val);
    }
    
    void pop() {
        if(v.size()==0){
            return;
        }
        int res=v[v.size()-1];
        auto itr=s.find(res);
        v.pop_back();
        s.erase(itr);
    }
    
    int top() {
        if(v.size()==0)
            return -1;
        return v[v.size()-1];
    }
    
    int getMin() {
        return *s.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */