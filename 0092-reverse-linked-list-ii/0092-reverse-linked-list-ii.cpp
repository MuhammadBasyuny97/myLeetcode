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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* leftNode = head;
        ListNode* rightNode = head;
        int n = 1;
        while(leftNode && n != left){
            leftNode = leftNode -> next;
            ++n;
        }
        ListNode* temp = leftNode;
        n = 1;
        while(rightNode && n != right){
            rightNode = rightNode -> next;
            ++n;
        }
        ListNode* current = temp ;
        stack<int> s;
        while(current && current != rightNode -> next ){
            s.push(current -> val);
            current = current -> next;
        }
        current = temp;
        while(!s.empty()){
            current -> val = s.top();
            s.pop();
            current = current -> next;
        }
        return head;
    }
};