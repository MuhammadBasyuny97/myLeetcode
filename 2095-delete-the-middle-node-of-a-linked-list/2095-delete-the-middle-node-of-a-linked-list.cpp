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
        ListNode* current = head;
        int nodes_count{0};
        
        while(current != nullptr){
            ++nodes_count;
            current = current -> next;
        }
        int middle = nodes_count / 2;
        ListNode* prev_middle = head;
        for(int i{0}; i < middle - 1; ++i){
            prev_middle = prev_middle -> next;
        }
        if(nodes_count > 1){
            ListNode* middleNode = prev_middle -> next;
            prev_middle -> next = middleNode -> next;
            middleNode -> next = nullptr;
        }
       
        return nodes_count > 1 ? head : nullptr;
    }
};