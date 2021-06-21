//https://leetcode.com/problems/add-two-numbers/submissions/
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
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr)
        {
            int x = l1 != nullptr ? l1->val : 0;
            int y = l2 != nullptr ? l2->val : 0;
            int sum = x + y + carry;
            carry = (sum >= 10) ? 1 : 0;
            int dig = sum % 10;
            temp->next = new ListNode(dig);
            temp = temp->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }

        if (carry > 0)
            temp->next = new ListNode(carry);
        return dummy->next;
    }
};