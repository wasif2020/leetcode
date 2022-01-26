class CustomStack {
public:
    int *arr;
    int curr_size;
    int cap;
    CustomStack(int maxSize) {
        cap=maxSize;
        curr_size=0;
        arr=new int[cap];
    }
    
    void push(int x) {
        if(curr_size!=cap){
        arr[curr_size]=x;
        curr_size++;
        }
    }
    int pop() {
        if(curr_size!=0){
            int res=arr[curr_size-1];
            curr_size--;
            return res;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        if(k<=curr_size){
            for(int i=0; i<k; i++)
                arr[i]=arr[i]+val;
        }
        else{
            for(int i=0; i<curr_size; i++)
                arr[i]=arr[i]+val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */