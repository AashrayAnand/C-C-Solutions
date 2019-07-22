#include "prototypes.h"

ListNode* swapPairs(ListNode* head) {
    if(!head || !head->next){
        return head;
    }
    ListNode * first = head;
    ListNode * second = head->next;
    ListNode * rest = second->next;
    head = second;
    second->next = first;
    first->next = swapPairs(rest);
    return head;
}
