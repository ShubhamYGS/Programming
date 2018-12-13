#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	
	printf("Enter the values for First Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the values for Second Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	
	printf("The Subtraction of two matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}
	
	return 0;
}

/*Output:
Enter the values for First Matrix:
7 6 4
45 6 2
4 54 1
Enter the values for Second Matrix:
45 4 2
4 6 7
98 5 1
The Subtraction of two matrix is:
-38     2       2
41      0       -5
-94     49      0

*/
