// Function to remove an entry

#include	<stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

/* 
 * ===  FUNCTION  ===================
 *         Name:  removeEntry
 *  Description:  
 * ==================================
 */
void removeEntry ( struct entry *toRemove )
{
	(*toRemove).next = (*(*toRemove).next).next;
}

int main (void)
{
	struct entry n1, n2, n3;
	
	n1.value = 100;
	n2.value = 200; 
	n3.value = 300;

	n1.next = &n2;
	n2.next = &n3;
	n3.next = (struct entry *) 0;		// Mark list end with null pointer

	void removeEntry ( struct entry *toRemove ); 

	struct entry *toRemove, *print;
	toRemove = &n2;

	removeEntry (toRemove);

	print = &n1;
	while(print != (struct entry *) 0)
	{
		printf ( "%i\n", print->value );
		print = print->next;
	}

	return 0;
}
