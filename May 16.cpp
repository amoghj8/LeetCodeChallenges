class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if(!head)
             return head;
        ListNode *oddPtr = head;
        ListNode *evenPtr = head->next;
        ListNode *evenHead = head->next;
        
        while(oddPtr->next!=nullptr && oddPtr->next->next!=nullptr) {
            oddPtr->next = evenPtr->next;
            evenPtr->next = oddPtr->next->next;
            oddPtr = oddPtr->next;
            evenPtr = evenPtr->next;
        }
        oddPtr->next = evenHead;
        return head;
        
    }
};
