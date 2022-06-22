/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * first=head;  //created a pointer for it
        ListNode *last=head;
        int count=0;
        while(last->next != NULL){
            last=last->next;
            count++;
        }
        
            if(count%2 ==0){
               for(int i=0;i<count/2;i++){
                   first=first->next;
               } }
        else{
            for(int i=0;i<=count/2;i++){
                   first=first->next;
               }
        }
            return first;        
        
    }
};
/*


*/