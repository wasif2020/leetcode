class Node{
public:

int data;
Node* next;
Node* prev;

Node(int n){
    this -> data = n;
    this -> next = NULL;
    this -> prev = NULL;
}
};

class MyCircularDeque {
public:

Node* head;
Node* tail;
int size;
int curr;

MyCircularDeque(int k) {
    size = k;
    curr = 0;
    head = NULL;
    tail = NULL;
}

bool insertFront(int value) {
    if(curr == size) return false;
    
    Node* temp = new Node(value);
    if(head == NULL){
        head = temp;
        tail = temp;
        curr = 1;
        return true;
    }
    
    head -> prev = temp;
    temp -> next = head;
    head = temp;
    curr++;
    return true;
}

bool insertLast(int value) {
    if(curr == size) return false;
    
    Node* temp = new Node(value);
    if(head == NULL){
        head = temp;
        tail = temp;
        curr = 1;
        return true;
    }
    
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    curr++;
    return true;
}

bool deleteFront() {
    if(head == NULL) return false;
    
    if(head == tail){
        head = NULL;
        tail = NULL;
        curr = 0;
        return true;
    }
    
    head = head -> next;
    head -> prev = NULL;
    curr--;
    return true;
}

bool deleteLast() {
    if(head == NULL) return false;
    
    if(head == tail){
        head = NULL;
        tail = NULL;
        curr = 0;
        return true;
    }
    
    tail = tail -> prev;
    tail -> next = NULL;
    curr--;
    return true;
}

int getFront() {
    if(head == NULL) return -1;
    else return head -> data;
}

int getRear() {
    if(head == NULL) return -1;
    else return tail -> data;
}

bool isEmpty() {
    if(head == NULL) return true;
    else return false;
}

bool isFull() {
    if(curr == size) return true;
    else return false;
}
};