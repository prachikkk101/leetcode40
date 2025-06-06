class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return NULL; // handle empty list

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != NULL) {
            if (prev->val == curr->val) { 
                prev->next = curr->next;
                curr = prev->next; 
            } else {
                prev = prev->next;
                curr = curr->next;
            }
        }

        return head; 
    }
};
