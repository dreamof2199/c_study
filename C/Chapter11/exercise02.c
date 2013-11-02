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
		printf ( "while loop %i\n", list->value );
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

	struct entry toInsert, *list, *loc, *toInsertPtr;
	toInsert.value = 400;

	list = &n1;
	loc = &n2;
	toInsertPtr = &toInsert;
	insertEntry ( list, loc, toInsertPtr);
	list = &n1;

	int n = 4;
	while ( n-- > 0)
	{
		printf ( "while  %i\n", list->value );
		list = (*list).next;

	}


	printf ( "%i\n",n2.next->value );
	printf ( "%i\n",n3.value );
	printf ( "%i\n",toInsertPtr->value );
	printf ( "%i\n",(*toInsertPtr).next->value );
	return 0;
}			
