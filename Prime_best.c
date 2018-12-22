#include<stdio.h>
int main()
{
	int num,i;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	
	if(i==num)
	{
		printf("%d is prime number",num);
	}
	else
	{
		printf("%d is not prime number",num);
	}
	return 0;
}

/*Output:
Enter any number: 56
56 is not prime number

Enter any number: 37
37 is prime number
*/
