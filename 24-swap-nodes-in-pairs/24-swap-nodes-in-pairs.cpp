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
        bool x  = false;
        ListNode *temp = head;
        if(head == NULL)
        {
            return NULL;
        }
        else if(!head->next)
        {
            return head;
        }
        else
        {
            head = head->next;
        }
            ListNode *pre;
        while(temp && temp->next)
        {
            
            ListNode *ptr = temp -> next;
            temp->next = temp->next->next;
            
            if(x)
            {
                pre->next = ptr;
            }
            else
            {
                x = true;
            }
            ptr->next = temp;
            pre = temp;
            temp = temp->next;
        }
        cout<<head->val;
        return head;
    }
};