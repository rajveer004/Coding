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
      ListNode * s = head;
      ListNode * f = head;
      ListNode * prev = nullptr;
      
      while( f!= nullptr && f->next != nullptr ){
        prev =s;
        s =s->next;
        f= f->next->next;
      }
      if(s==f && f->next == nullptr)return nullptr;
      prev->next = s->next;
      delete s;
      return head;
    }
};