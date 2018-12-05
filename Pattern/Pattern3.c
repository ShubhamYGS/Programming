#include<stdio.h>
void main()
{
	int i,j;
	int num=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",num++);
		}
		printf("\n");
	}	
}

/*Output:
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
*/
