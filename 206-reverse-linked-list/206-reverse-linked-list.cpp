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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL; // a way to make ptr which pts at node.. it is not a node it is a ptr
        ListNode* curr = head;
        ListNode* nextptr = NULL;
        while(curr){
            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
        }
        return prev; // here prev is pointing to head so we are returning it as when giving linked list the head was given inside reverselist fn.
    }
};