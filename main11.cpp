class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Handle case where head nodes need to be removed
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // If the list is now empty
        if (head == nullptr) return nullptr;

        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next; // don't move prev forward
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};
