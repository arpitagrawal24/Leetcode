/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode(int x) : val(x), next(NULL) {}
 *};
 */
class Solution
{
    public:
        ListNode* detectCycle(ListNode *head)
        {
            ListNode *first = head;
            ListNode *second = head;
            while (first and second and second->next)
            {
                cout<<first->val<<" "<<second->val<<endl;
                first = first->next;
                second = second->next->next;
                if (first == second)
                {
                    break;
                }
            }
            if(!(second and second->next)) return NULL;
            
            second = head;
            while(first != second)
            {
                first = first->next;
                second = second->next;
            }
            return second;
            
            
        }
};