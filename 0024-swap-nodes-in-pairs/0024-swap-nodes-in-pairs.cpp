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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr)return nullptr;
        if(head->next == nullptr)return head;

        ListNode * first = head;
        ListNode * second = head->next;
        
        ListNode * nextList = second->next;

        second->next = first;
        first->next = nullptr;

        ListNode* x = swapPairs(nextList);

        first->next =x;
        return second;

    }
};