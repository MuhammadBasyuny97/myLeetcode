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
    ListNode* deleteMiddle(ListNode* head) {
        if(head -> next == nullptr) return nullptr;
       ListNode* slowPointer = head;
       ListNode* fastPointer = head;
       ListNode* prevMiddle = head;
       while(fastPointer && fastPointer -> next){
            prevMiddle = slowPointer;
            fastPointer = fastPointer -> next -> next;
            slowPointer = slowPointer -> next;
         }
        prevMiddle -> next = slowPointer -> next;
        return head;
    }
};