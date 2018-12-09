#include<stdio.h>
int main()
{
	int i;
	for(i=0;++i<=10;)
	{
		printf("%d\n",i);
	}
	return 0;
}

/* Here, both, the comparison and the incrementation is done
through the same statement, ++i <= 10. Since ++ precedes i
firstly incrementation is done, followed by comparison. Note
that it is necessary to initialize i to 0.
*/
