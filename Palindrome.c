#include<stdio.h>
int main()
{
	int num,rem,sum=0,m;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	m=num;
	
	while(m>0)
	{
		rem=m%10;
		sum=sum*10+rem;
		m=m/10;
	}
	if(num==sum)
	{
		printf("The %d is Palindrome",num);
	}
	else
	{
		printf("The %d is not Palindrome",num);
	}
}

/*Output:
Enter the number: 1234
The 1234 is not Palindrome

Enter the number: 23432
The 23432 is Palindrome
*/
