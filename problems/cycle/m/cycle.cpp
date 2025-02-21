#include "cycle.h"

bool cycle::hasCycle(ListNode* head)
{
    if (!head->next) return false;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (slow && fast->next)
        {
            if (slow == fast) return true;

            slow = slow->next;
            fast = fast->next->next;
        }

        return false;
}