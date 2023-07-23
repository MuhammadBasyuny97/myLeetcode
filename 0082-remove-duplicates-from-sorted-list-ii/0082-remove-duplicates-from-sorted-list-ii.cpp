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
   
    ListNode* deleteDuplicates(ListNode* head) {
  
        map<int,int> m;
        ListNode* current = head;
        while(current != nullptr){
            int val = current -> val;
            m[val]++;
            current = current -> next;
        }
        vector<int>unDuplicated;
        for(auto elem: m){
            if(elem.second == 1) unDuplicated.push_back(elem.first);
        }
      
         ListNode* prev = new ListNode();
         ListNode* dummy = prev;
        for(int i{0}; i < unDuplicated.size(); ++i){
            int val = unDuplicated[i];
            ListNode* ptr = new ListNode(val);
            prev -> next = ptr;
            prev = ptr;        
        }
        return dummy -> next;
    }
};