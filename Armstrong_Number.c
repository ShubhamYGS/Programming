#include<stdio.h>
int main()
{
	int num,m,rem,result=0;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	m=num;
	
	while(m>0)
	{
		rem=m%10;
		m=m/10;
		result=result+rem*rem*rem;
	}
	
	if(result==num)
	{
		printf("%d is Armstrong Number",num);
	}
	else
	{
		printf("%d is not Armstrong Number",num);
	}
	
	return 0;
}

/*Output:
Enter the number: 344
344 is not Armstrong Number

Enter the number: 371
371 is Armstrong Number
*/
