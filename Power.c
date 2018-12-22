#include<stdio.h>
int main()
{
	int num1,num2,i,result=1;
	
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	for(i=1;i<=num2;i++)
	{
		result=result*num1;
	}
	printf("%d Power %d is %d",num1,num2,result);

	return 0;
}

/*Output:
Enter first number: 5
Enter second number: 3
5 Power 3 is 125
*/
