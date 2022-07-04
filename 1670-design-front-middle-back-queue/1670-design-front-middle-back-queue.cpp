class FrontMiddleBackQueue {
    
    
public:
    class Node{
      public :
        int val;
        Node * next, *prev;
        Node(int val){
            this->val = val;
            next = prev = NULL;
        }
        
    };
    
    Node *head, * mid , *tail;
    int size;
    
    
    
    FrontMiddleBackQueue() {
        head = tail = mid = NULL;
        size = 0;
    }
    
    void firstPush(int val){
        Node* new_node = new Node(val);
        head = tail = mid = new_node;
        size = 1;
    }
    
    
    void pushFront(int val) {
        if(!head){
            firstPush(val);
            return;
        }
        
        Node * new_node = new Node(val);
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
        size++;
        
        mid = size%2 == 0 ? mid->prev : mid;
    }
    
    void pushMiddle(int val) {
        if(!head){
            firstPush(val);
            return;
        }
        Node* new_node = new Node(val);
        if(size&1){
            Node* start = mid->prev;
            if(start == NULL)
                head = new_node;
            else
                start->next = new_node;
            mid->prev = new_node;
            new_node->next = mid;
            new_node->prev = start;
        }
        else{
            Node* end = mid->next;
            mid->next = new_node;
            new_node->prev = mid;
            new_node->next = end;
            end->prev = new_node;
        }
        size++;
        mid = new_node;  
    }
    
    void pushBack(int val) {
        if(!head){
            firstPush(val);
            return;
        }
        Node * new_node = new Node(val);
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        size++;
        
        mid = size%2 != 0 ? mid->next : mid;
    }
    
    int popFront() {
        if(!head)
            return -1;
        int val = head->val;
        Node* temp = head;
        head = head->next;
        if(head)
            head->prev = NULL;
        size--;
        if(size == 0)
            head = tail = mid = NULL;
        else
            mid = (size&1) ? mid->next : mid;
        
        delete temp;
        return val;
        
    }
    
    int popMiddle() {
         if(!head)
            return -1;
        Node * temp = mid;
        int val = mid->val;
        size--;
        if(size == 0){
            tail = head = mid = NULL;
        }
        else{
            if(size&1){
                // head change
                // new_mid = mid-next;
              
                Node* new_mid = mid->next;
                Node* start = mid->prev;
                Node* end = mid->next;
                if(!start)
                    head = mid->next;
                else
                    start->next = end;
                end->prev = start;
                mid = new_mid;
                
            }
            else{
                // new_mid = mid->prev;
                // no exception
                Node* new_mid = mid->prev;
                Node* start = mid->prev;
                Node* end = mid->next;
                start->next = end;
                end->prev = start;
                mid = new_mid;
            }
        }
        
        
        delete temp;
        return val;
    }
    
    int popBack() {
         if(!head)
            return -1;
        int val = tail->val;
        Node *temp = tail;
        tail = tail->prev;
        if(tail)
            tail->next= NULL;
        size--;
        if(size == 0)
            head = tail = mid = NULL;
        else
            mid = !(size&1)? mid->prev : mid;
        delete temp;
        return val;
        
    }
};