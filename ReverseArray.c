#include<stdio.h>
int main()
{
	int n,i,j,a[100],b[100];
	
	printf("Enter the number of elemets in array:\n");
	scanf("%d",&n);
	
	printf("Enter the elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	/*Copying elements into array b starting from end of array a*/
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	
	/*Copying reversed array into original 
	Here, we are modifying original array, This is optional*/
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	
	printf("Reverse Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	} 
	
	return 0;
}

/*output:
Enter the number of elemets in array:
4
Enter the elements into array:
5
6
8
2
Reverse Array is:
2
8
6
5
*/
