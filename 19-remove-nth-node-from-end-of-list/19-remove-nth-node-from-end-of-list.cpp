/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* removeNthFromEnd(ListNode *head, int n)
        {
            
            ListNode *temp = head;
            for (int i = 0; i < n; i++)
                temp = temp->next;
            
            if(temp == NULL)
                return head->next;
            
            ListNode *curr = head;
            while (temp->next)
            {
                cout<<temp->val<<" ";
                temp = temp->next;
                curr = curr->next;
            }
            ListNode *node = curr->next;
            curr->next = node->next;
            delete(node);
            return head;
        }
};