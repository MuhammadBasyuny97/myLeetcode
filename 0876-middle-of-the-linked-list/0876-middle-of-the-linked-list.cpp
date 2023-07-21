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
    ListNode* middleNode(ListNode* head) {
       int nodes_count{0};
  ListNode *currentNode = head;
  while(currentNode != nullptr){
    nodes_count++;
    currentNode = currentNode->next;
  }
  int middle = nodes_count / 2;
  ListNode *middle_node = head;
  while(middle != 0){
    middle_node = middle_node->next;
    --middle;
  }
  
  return middle_node ; 
    }
};