#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i=i+1)
	{
		printf("%d\n",i);
	}
	return 0;
}

/* Note that the initialisation, testing and incrementation of loop
counter is done in the for statement itself. Instead of i = i + 1,
the statements i++ or i += 1 can also be used.
*/
