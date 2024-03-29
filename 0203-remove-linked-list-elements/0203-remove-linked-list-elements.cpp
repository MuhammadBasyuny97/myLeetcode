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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode dummy(0,head);
        ListNode* prev = &dummy;
        while(current != nullptr){
            if(current -> val == val){
                prev -> next = current -> next;
            }
            else{
                prev = current;
            }
            
            current = current -> next;
        }
        return dummy.next;
    }
};