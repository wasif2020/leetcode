class ProductOfNumbers {
public:
    vector<int>v;
    int product=1;
    ProductOfNumbers() {
        
    }
    void add(int num) {
    product*=num;
        if(product==0){
            v.clear();
            product=1;
            return;
        }
    v.push_back(product);
    }
    
    int getProduct(int k) {
        if(k>v.size()) return 0;
        if(k==v.size()) return v[v.size()-1];
        int res=(v[v.size()-1])/(v[v.size()-k-1]);
        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */