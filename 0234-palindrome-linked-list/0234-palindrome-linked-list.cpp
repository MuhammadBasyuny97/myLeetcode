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
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        while(head) {
            nums.push_back(head -> val);
            head = head -> next;
        }
        
        size_t l {0};
        size_t r = nums.size() - 1;
        while(l < r){
         if(nums[l] != nums[r]) return false;
              ++l; 
              --r;
        }
        return true;
    }
};