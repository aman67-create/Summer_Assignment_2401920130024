class Solution {
public:
    ListNode* reverseList(ListNode* head) {
      ListNode* temp = NULL;
      ListNode* curr = head;
      ListNode* forward = NULL;
      while(curr != NULL){
        forward = curr->next;
        curr->next = temp;
        temp = curr;
        curr = forward;
      }  
      return temp;
    }
};
