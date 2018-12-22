#include<stdio.h>
int factorial(int );
int main()
{
	int fn,sn;
	
	printf("Enter First number: ");
	scanf("%d",&fn);
	
	printf("Enter Second number: ");
	scanf("%d",&sn);
	
	printf("The factorial of %d is %d",fn,factorial(fn));
	printf("\nThe factorial of %d is %d",sn,factorial(sn));
}

int factorial(int input)
{
	int fact=1,i;
	for(i=1;i<=input;i++)
	{
		fact=fact*i;
	}
	return fact;
}

/*Output:
Enter First number: 4
Enter Second number: 5
The factorial of 4 is 24
The factorial of 5 is 120
*/
