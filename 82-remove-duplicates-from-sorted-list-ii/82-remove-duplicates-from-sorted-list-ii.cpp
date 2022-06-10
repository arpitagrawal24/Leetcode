/**
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteDuplicates(ListNode *head)
        {
            ListNode *extra = new ListNode(-1);	// -1 -> 1 -> 2 -> 2 -> 4 -> 4 -> 5 	// just add node ahead
            extra->next = head;
            ListNode *ptr = extra;
            while (ptr->next and ptr->next->next)
            {
                if (ptr->next->val != ptr->next->next->val)
                {
                    ptr = ptr->next;
                }
                else
                {
                    int x = ptr->next->val;
                   	// loop until we get the repeated value
                    while (ptr->next and ptr->next->val == x)
                    {
                        ptr->next = ptr->next->next;
                    }
                }
            }
            return extra->next;
        }
};