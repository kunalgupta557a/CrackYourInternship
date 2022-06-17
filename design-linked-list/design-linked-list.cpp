class MyLinkedList {
private:
    struct Node{
        int value;
        Node* next=NULL; //null neccasary
        Node(int val){  //parametrized counstructor
            value=val;
            next=nullptr;
        }
    };
     
    Node* head;
    int size; // size of linked list
    
    
public:
    
   
    

    MyLinkedList() {  //counstructor used for automatically implementing or calling something
        
        head=nullptr;
        size=0;
    }
    
    int get(int index) { 
        if(index>=size) return -1;
        else{
            Node* currentnode = head;
            for(int i=0;i<index;i++){
                currentnode=currentnode -> next;
                
            }
            return currentnode->value;
        }
        
    }
    // iterate till the node doesnt come
    
    void addAtHead(int val) {
        Node* first = new Node(val);
        first->next=head;
        head=first;
        ++size;
    }
    
    void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    void addAtIndex(int index, int val) {
        if(index>size) return;
        Node* newnode = new Node(val);  //allocating memory
        Node* current = head; // not allocating memory
        
        if(index==0) addAtHead(val);
        
        else
        {
            for(int i=0;i<index-1;i++){
                current=current -> next;
            }
            newnode->next=current->next;
            current->next=newnode;
            ++size;
            
            }
        
    }
    // 0 1 2 3
    void deleteAtIndex(int index) {
        if(index>=size) return;
        if(index==0){
            Node* tempnode =head;
            head=head->next;
            delete tempnode; //freeing up memeory just oppostie keyword of new;
        }
        else{
        Node* current = head;
        Node* delnode = head;
        for(int i=0;i<index-1;i++){
            current=current->next;
        }
        Node* nextnode=current->next->next;
        delete current->next;
        current->next=nextnode;}
        --size;
    }
    ~MyLinkedList()
    {
        Node *p = head;
        // Delete node at head while head is not null
        while (head!=nullptr)
        {
            head= head->next;
            delete p;
            p=head;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */