#include<stdio.h>
int main()
{
	int i;
	for(i=0;i++<10;)
	{
		printf("%d\n",i);
	}
	return 0;
}

/* Here, the comparison as well as the incrementation is done
through the same statement, i++ < 10. Since the ++ operator
comes after i firstly comparison is done, followed by
incrementation. Note that it is necessary to initialize i to 0.
*/
