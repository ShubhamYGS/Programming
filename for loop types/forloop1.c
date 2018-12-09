#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;)
	{
		printf("%d\n",i);
		i=i+1;
	}
	return 0;
}

/* Here, the incrementation is done within the body of the for
loop and not in the for statement. Note that inspite of this the
semicolon after the condition is necessary.
*/
