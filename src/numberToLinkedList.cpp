/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) 
{
	struct node *start = NULL, *current = NULL;
	int i, rem;
	struct node *newnode = NULL;
	if (N<0)
		N = N*(-1);
	if (N == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = 0;
		newnode->next = NULL;
	}
	while (N > 0)
	{
		rem = N % 10;
		N /= 10;
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = rem;
		if (start == NULL)
		{
			start = newnode;
			start->next = NULL;
			current = start;
		}
		else
		{
			newnode->next = current;
			current = newnode;
		}
	}
	return newnode;
}