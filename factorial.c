#include<stdio.h>
int factorial(int x);
int main()
{
	int num,fact;
	printf("Enter any number: ");
	scanf("%d",&num);
	fact=factorial(num);
	printf("The Factorial is: %d",fact);
	return 0;
}

int factorial(int x)
{
	int f=1,i;
	for(i=x;i>=1;i--)
	{
		f=f*i;
	}
	return (f);
}

/*Ouput:
Enter any number: 7
The Factorial is: 5040
*/
