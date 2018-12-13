#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,sum=0;
	
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
			for(k=0;k<3;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	
	printf("The Multiplication of two matrix is:\n");
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
2 3 4
1 2 3
3 4 5
Enter the values for Second Matrix:
2 3 4
1 2 3
2 3 4
The Multiplication of two matrix is:
15      24      33
10      16      22
20      32      44

*/
