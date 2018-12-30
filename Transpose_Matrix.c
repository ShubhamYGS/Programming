#include<stdio.h>
int main()
{
	int a[10][10],i,j;
	
	printf("Enter first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nTranspose Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}

/*Output:
Enter first matrix:
1 2 3
2 3 3
3 4 5

Transpose Matrix:
1       2       3
2       3       4
3       3       5
*/


