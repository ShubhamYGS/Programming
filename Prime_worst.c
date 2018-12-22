#include<stdio.h>
int main()
{
	int num,i,count=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("The %d is prime number",num);
	}
	else
	{
		printf("The %d is not prime number",num);
	}
	
	return 0;
}

/*Output:
Enter any number: 19
The 19 is prime number

Enter any number: 34
The 34 is not prime number
*/
