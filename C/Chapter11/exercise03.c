// Funtcion to use linked Lists

#include	<stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

void insertEntry ( struct entry *list, struct entry *loc, struct entry *toInsert)
{
	while ( list != loc)
	{
		list = (*list).next;
	}

	(*toInsert).next = (*list).next;
	(*list).next = toInsert;
	
}

int main ( void )
{

	struct entry n1, n2, n3;
	
	n1.value = 100;
	n2.value = 200; 
	n3.value = 300;

	n1.next = &n2;
	n2.next = &n3;

	struct entry toInsert, *loc, *toInsertPtr, *linkHead;
	toInsert.value = 400;

	linkHead = &n1;
	loc = &n2;
	toInsertPtr = &toInsert;
	insertEntry ( linkHead, loc, toInsertPtr);
	linkHead = &n1;

	int n = 4;
	while ( n-- > 0)
	{
		printf ( "while  %i\n", linkHead->value );
		linkHead = (*linkHead).next;

	}

	return 0;
}			
