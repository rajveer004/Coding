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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode* f =head; 
        ListNode* s =head->next;
        ListNode* temp =s;
        while(f->next!=nullptr && s->next!=nullptr){
          f->next = s->next;
          f=f->next;
          s->next =f->next;
          s=s->next;
        }
        f->next = temp;
        return head;
    }
};