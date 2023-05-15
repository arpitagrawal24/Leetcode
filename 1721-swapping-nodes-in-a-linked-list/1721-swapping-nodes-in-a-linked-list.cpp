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
	int countNodes(ListNode* s)
	{
		int count = 0;
		while (s != NULL) {
			count++;
			s = s->next;
		}
		return count;
	}

	ListNode* swapNodes(ListNode* head, int k)
	{
		ListNode* ptr = head;
		ListNode* temp1 = head;
		ListNode* temp2 = head;
		int n = countNodes(head), a = 1;
	
		// cout << n;

		if (n < k)
		return head;
	    if (2 * k - 1 == n)
		return head;
		int x=n-k+1;
		for (int i = 1; i <= n; ++i)
		{
			if(i==k)
			{
				temp1= ptr;
			}
			if(i==x)
			{
				temp2 = ptr;
			}
			ptr= ptr->next;
		}
		int y= temp1->val;
		temp1->val=temp2->val;
		temp2->val=y;
			
		return head;
	}
};