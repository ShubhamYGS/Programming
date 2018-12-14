#include<stdio.h>
int rec(int x);
int main()
{
	int num,fact;
	printf("Enter any number: ");
	scanf("%d",&num);
	fact=rec(num);
	printf("The Factorial is: %d",fact);
	return 0;
}

int rec(int x)
{
	int f;
	if(x==1)
	{
		return (1);
	}
	else
	{
		f=x*rec(x-1);		//recursive call
		return (f);
	}
}

/*Output:
Enter any number: 7
The Factorial is: 5040
*/
