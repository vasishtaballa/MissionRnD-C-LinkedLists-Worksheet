/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) 
{
	int i = 1;
	struct node *temp = head;
	node *p = temp;
	if (K == 0)
		return NULL;
	if (K == 1)
		return NULL;
	if (K < 0)
		return NULL;
	while (temp != NULL)
	{
		if ((i % K == 0) && (K <= i))
		{
			if (temp == head)
			{
				head->next = temp->next->next;
			}
			else
			{
				head->next = head->next->next;
				temp = temp->next;
			}
		}
		else
		{
			head = temp;
			temp = temp->next;
		}
		i++;
	}
	return p;
}