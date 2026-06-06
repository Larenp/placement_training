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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 1;
        if (head == NULL || head->next == NULL || k == 0)
            return head;

        while (temp->next != NULL) {
            temp = temp->next;
            count++;
        }

        k = k % count;

        if (k == 0)
            return head;

        ListNode* tail = temp;
        tail->next = head;

        int pos = count - k - 1;
        temp = head;
        int ptr = 0;
        while (ptr < pos) {
            temp = temp->next;
            ptr++;
        }

        ListNode* newHead = temp->next; 
        temp->next = NULL;              

        return newHead;
    }
};