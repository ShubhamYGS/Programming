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
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("The Addition of two matrix is:\n");
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
3 4 5
77 3 6
5 78 23
Enter the values for Second Matrix:
45 5 1
5 43 4
56 43 1
The Addition of two matrix is:
48      9       6
82      46      10
61      121     24
*/
