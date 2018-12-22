#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	printf("The factor of %d are ",num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d, ",i);
		}
	}
	
	return 0;
}

/*Output:
Enter any number: 20
The factor of 20 are 1, 2, 4, 5, 10, 20,
*/
