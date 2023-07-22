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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head -> next == nullptr){
            return nullptr;
        }
      
        int nodesCount = {0};
        ListNode* current = head;
        while(current != nullptr){
            nodesCount++;
            current = current -> next;
        }
        int removedIndex = nodesCount - n;
        if(removedIndex == 0){
            return head -> next;
        } 
        ListNode* prevNode = head;
        for(int i{0}; i < removedIndex - 1; ++i){
            prevNode = prevNode -> next;
        }
        prevNode -> next = prevNode -> next -> next;
        return head;
    }
};