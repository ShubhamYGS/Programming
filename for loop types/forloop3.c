#include<stdio.h>
int main()
{
	int i=1;
	for(;i<=10;)
	{
		printf("%d\n",i);
		i=i+1;
	}
	return 0;
}

/* Here, neither the initialisation, nor the incrementation is done
in the for statement, but still the two semicolons are
necessary.
*/
