#include <stddef>
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
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // Three cases, both places have number, one number is longer than the other
        ListNode *i3 = new ListNode();
        ListNode *temp = i3;
        int val = 0;
        int carry = 0;
        while (l1 != NULL && l2 != NULL)
        {
            val = l1->val + l2->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode *curr = new ListNode(val);
            temp->next = curr;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL && l2 == NULL)
        {
            val = l1->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode *curr = new ListNode(val);
            temp->next = curr;
            temp = temp->next;
            l1 = l1->next;
        }
        while (l2 != NULL && l1 == NULL)
        {
            val = l2->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode *curr = new ListNode(val);
            temp->next = curr;
            temp = temp->next;
            l2 = l2->next;
        }
        if (carry != 0)
        {
            val = carry;
            carry = val / 10;
            val = val % 10;
            ListNode *curr = new ListNode(val);
            temp->next = curr;
            temp = temp->next;
        }
        return i3->next;
    }
};