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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        stack<int> s;
        ListNode* current = head;
        while(current != nullptr){
            s.push(current -> val);
            current = current -> next;
        }
        ListNode* temp = new ListNode(s.top());
        ListNode dummy(0,temp);
        s.pop();
        while(!s.empty()){
            temp -> next = new ListNode (s.top()); 
            temp = temp -> next;
            s.pop();
        }
        return dummy.next;
    }
};