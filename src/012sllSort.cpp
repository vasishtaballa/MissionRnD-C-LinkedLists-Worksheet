/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	struct node *p = head, *q = head;
	int count1 = 0, count2 = 0, count0 = 0;
	while (head != NULL)
	{
		if (head->data == 0)
			count0++;
		else if (head->data == 1)
			count1++;
		else
			count2++;
		head = head->next;
	}
	while (count0 > 0)
	{
		q->data = 0;
		count0--;
		q = q->next;
	}
	while (count1 > 0)
	{
		q->data = 1;
		count1--;
		q = q->next;
	}
	while (count2 > 0)
	{
		q->data = 2;
		count2--;
		q = q->next;
	}
}