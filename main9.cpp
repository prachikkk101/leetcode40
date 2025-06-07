class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);  // Dummy node to start the result list
        ListNode* current = dummy;           // Pointer to build the result
        int carry = 0;                       // To hold carry value while adding

        
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int num1 = (l1 != NULL) ? l1->val : 0;   
            int num2 = (l2 != NULL) ? l2->val : 0;  

            int sum = num1 + num2 + carry;  
            carry = sum / 10;                

            current->next = new ListNode(sum % 10);  
            current = current->next;                

           
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }

        return dummy->next;  
    }
};

