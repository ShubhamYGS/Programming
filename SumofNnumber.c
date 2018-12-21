#include<stdio.h>
int main()
{
	int num,i,sum=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	
	printf("Sum of %d natural number is %d",num,sum);
	return 0;
}

/*Output:
Enter any number: 100
Sum of 100 natural number is 5050
*/
