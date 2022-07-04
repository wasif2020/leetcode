struct Node{
     Node*next;
    int data;
    Node(int d){
        data=d;
        next=NULL;
        
    }
};
class MyCircularQueue {
public:
    Node*head;
    Node*tail;
    int size;
    int cap;
    MyCircularQueue(int k) {
        head=tail=NULL;
        cap=k;
        size=0;
    } 
    bool enQueue(int value) {
        if(size==cap) return false;
        Node*temp=new Node(value);
        if(head==NULL){
            head=tail=temp;
            size=1;
            return true;
        }
        tail->next=temp;
        tail=temp;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(size==0 or head==NULL) return false;
        Node*temp=head;
        head=head->next;
        delete temp;
        size--;
        return true;
    }
    
    int Front() {
        if(size==0) return -1;
        return head->data;
    }
    
    int Rear() {
        if(size==0) return -1;
        return tail->data;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==cap;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */