#include<stdio.h>
int main()
{
	int num,rem,result=0;
	
	printf("Enter any number: ");
	scanf("%d",&num);
	
	printf("The Sum of digit of number %d is: ",num);
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		result=result+rem;
	}
	
	printf("%d",result);
	
	return 0;
}

/*Output:
Enter any number: 983
The Sum of digit of number 983 is: 20
*?
