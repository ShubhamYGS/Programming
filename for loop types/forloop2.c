#include<stdio.h>
int main()
{
	int i=1;
	for(;i<=10;i=i+1)
	{
		printf("%d\n",i);
	}
	return 0;
}

/* Here the initialisation is done in the declaration statement
itself, but still the semicolon before the condition is necessary.
*/
