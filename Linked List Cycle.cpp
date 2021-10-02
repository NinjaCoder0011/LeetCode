//Program to Linked List Cycle
//Created by Aryan
//Created on 02/10/2021

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        } else {
            ListNode *slow = head, *fast = head->next;
            
            while (slow != fast) {
                if (fast == NULL || fast->next == NULL) {
                    return false;
                } else {
                    slow = slow->next;
                    fast = fast->next->next;
                }
            }
            return true;
        }
    }
};