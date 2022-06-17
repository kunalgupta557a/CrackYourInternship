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
        // Return if invalid index
        if(index>=size || index < 0) {
            return;
        }
        // index==0 implies delete at head
        // Considered separately as we need to update head
        if (index == 0) {
            Node* nextNode = head->next;
            // Always remember to free memory to prevent memory leak
            delete head;
            head = nextNode;            
        }
        else {
            Node* current= head;
            // Run loop till index-1 as we need to insert node at index
            for(int i=0;i<index-1;++i) {
                current= current->next;
            }
            /* 
                current --> current->next --> current->next->next
                                                (next_node)
                        
                current --> DELETED --> current->next->next
                
                current --> next_node
            
            */  
            Node* nextNode = current->next->next;
            // Always remember to free memory to prevent memory leak
            delete current->next;
            current->next = nextNode;
        }
        // Decrease size whenever we delete node
            size--;
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