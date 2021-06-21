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
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;
        ListNode *prev = head;

        while (temp != nullptr)
        {

            if (temp->val != prev->val)
            {
                prev->next = temp;
                prev = temp;
            }
            temp = temp->next;
        }

        if (prev != temp)
        {
            prev->next = nullptr;
        }
        return head;
    }
};