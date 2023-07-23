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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* evenHead = head -> next;
        ListNode* oddPtr = head;
        ListNode* evenPtr = head -> next;
        
        while(oddPtr-> next != nullptr && evenPtr -> next != nullptr){
            oddPtr -> next = oddPtr -> next -> next;
            oddPtr = oddPtr -> next;
            evenPtr -> next = evenPtr -> next -> next;
            evenPtr = evenPtr -> next ;
        }
        oddPtr -> next = evenHead;
       return head; 
    }
};