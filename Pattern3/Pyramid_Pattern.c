#include<stdio.h>
int main()
{
	int i,j,k;
	k=7;

	for(i=1;i<=7;i++)
	{
		for(j=1;j<k;j++)
		{
			printf(" ");
		}
		k--;
		
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*Output:
      *
     ***
    *****
   *******
  *********
 ***********
*************

*/
