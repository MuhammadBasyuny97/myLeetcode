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
    ListNode* traverseToNewNode(ListNode* root, int val){
        while(root && root -> val == val){
            root = root -> next;
        }
        return root;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head -> next == nullptr){
            return head;
        }
       while(head && head -> next != nullptr && head -> val == head -> next -> val){
           head = traverseToNewNode (head, head -> val);
       }
        //ListNode dummy = (-1,head);
        ListNode* current = head;
        ListNode* prev = current;
        while(current != nullptr && current -> next != nullptr){
            if(current -> val == current -> next -> val){
                current = traverseToNewNode(current, current -> val);
                prev -> next = current;
            }
            else{
                prev = current;
               current = current -> next; 
            }
        }
        return head;
    }
};