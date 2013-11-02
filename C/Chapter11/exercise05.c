// Create a doubly linked list and print it out

#include	<stdio.h>

struct entry
{
	int value;
	struct entry * previous;
	struct entry * next;
};

/* 
 * ===  FUNCTION  ===================
 *         Name:  printDoubleLinkList
 *  Description:  
 * ==================================
 */
void printDoubleLinkList ( struct entry * list )
{
	while (list != (struct entry *) 0)
	{
		printf ( "%i\n", list->value );
		list = list->next;
	}
}
int main (void)
{
	struct entry n1, n2, n3, *listHead;

	n1.value = 100;
	n1.next = &n2;

	n2.value = 200;
	n2.previous = &n1;
	n2.next = &n3;

	n3.value = 300;
	n3.previous = &n2;
	n3.next = (struct entry *) 0;

	void printDoubleLinkList (struct entry * list);

	listHead = &n1;
	printDoubleLinkList (listHead);

	return 0;
}
