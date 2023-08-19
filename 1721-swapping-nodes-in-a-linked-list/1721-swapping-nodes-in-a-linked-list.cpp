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
    ListNode* swapNodes(ListNode* head, int k) {
        int nodes_count{0};
        ListNode* current = head;
        ListNode* left;
        ListNode* right;
       while(current){
           nodes_count++;
           current = current -> next; 
       }
         int count{0};
        current = head;
        while(current){
            count++;  
            if(nodes_count - k + 1 == count)  right = current;
            if(count == k)  left = current;   
            current = current -> next;
        }
        swap(left -> val , right -> val);
        return head;
    }
};