/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
void swap(struct node *a, struct node *b);

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) 
{
	if (head == NULL)
		return NULL;
	struct node *p = head, *q = head, *k = head;
	for (; head != NULL; head = head->next)
	{
		for (; p != NULL; p = p->next)
		{
			if (head->num < p->num)
				swap(head, p);
		}
		p = q;
	}
	return k;
}

void swap(struct node *a, struct node *b)
{
	int temp = a->num;
	a->num = b->num;
	b->num = temp;
}