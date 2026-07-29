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
    int pairSum(ListNode* head) {
       ListNode* slow = head; 
       ListNode* fast = head;
       while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode * prev =nullptr;
       ListNode* curr =slow;
       ListNode* Next =curr->next;
       while(curr->next!=nullptr){
          curr->next=prev;
          prev=curr;
          curr=Next;
          Next=Next->next;
       } 
       curr->next=prev;
       int maxSum =0;
       while(head!=slow){
        maxSum = max(maxSum,(head->val + curr->val));
        head = head->next;
        curr = curr->next;
       }
       return maxSum;
    }
};