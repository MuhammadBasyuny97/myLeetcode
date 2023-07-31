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
    ListNode* sortList(ListNode* head) {
        vector<int> vec;
        ListNode* temp = head;
        while(temp){
            vec.push_back(temp -> val);
            temp = temp -> next;
        }
        temp = head;
        sort(vec.rbegin(), vec.rend());
        while(!vec.empty()){
            int n = vec.size();
            temp -> val = vec[n-1];
            temp = temp -> next; 
            vec.pop_back();
        }
        return head;
    }
};