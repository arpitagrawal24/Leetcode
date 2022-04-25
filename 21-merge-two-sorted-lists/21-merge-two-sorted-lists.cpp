/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:

        ListNode* insert(ListNode *head, int val)
        {
            ListNode *newNode = new ListNode(val);
            
            if (head == NULL)
                head = newNode;
            else
            {
                head->next = newNode;
                head = head->next;
            }
            return head;
        }

        ListNode* mergeTwoLists(ListNode *list1, ListNode *list2)
        {
            ListNode *head = new ListNode;
            ListNode *ptr = head;
            // cout<< ptr->val;
            while (list1 && list2)
            {
                if (list1->val < list2->val)
                {
                    ptr = insert(ptr , list1->val);
                    list1 = list1->next;
                }
                else if(list2->val < list1->val)
                {
                    ptr = insert(ptr , list2->val);
                    list2 = list2->next;
                }
                else
                {
                    ptr = insert(ptr , list1->val);
                    list1 = list1->next;
                    ptr = insert(ptr , list2->val);
                    list2 = list2->next;
                }
            }
            while(list1)
            {
                ptr = insert(ptr , list1->val);
                list1 = list1->next;
            }
            while(list2)
            {
                ptr = insert(ptr , list2->val);
                list2 = list2->next;
            }
            return head->next;
        }
};