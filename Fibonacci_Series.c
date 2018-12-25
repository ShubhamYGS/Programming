#include<stdio.h>
int main()
{
	int num,a=0,b=1,i,c;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	printf("Fibonacci Series: 0 1");
	for(i=1;i<=num-2;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	
	return 0;
}

/*Output:
Enter the number: 9
Fibonacci Series: 0 1 1 2 3 5 8 13 21
*/
