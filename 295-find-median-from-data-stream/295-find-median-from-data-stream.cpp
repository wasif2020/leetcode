class MedianFinder {
public:
    multiset<int>m;
    int s=0;
    multiset<int>::iterator it;
    MedianFinder() {   
        m.clear();
        s=0;
    }
    void addNum(int num) {
        m.insert(num);
        s++;
        if(s==1){
            it=m.begin();
            return;
        }
        if(s%2==0 and num<*it)
             it--;
        if(s%2 and num>=*it)
            it++;
    }
    double findMedian() {
        auto itr=it;
        if(s%2==1)
            return (double)*itr;
        
        int m1=(*itr);
        itr++;
        int m2=(*itr);
        return (double)(m1+m2)/2;;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */