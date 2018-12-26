#include<stdio.h>
#include<stdbool.h>			//This header file only need to declare in Dev-C++ (stdbool.h is c99 standard)
bool isArmstrong(int n);
int main()
{
	int a,b,i;
	
	printf("Enter first number: ");
	scanf("%d",&a);
	
	printf("Enter second number: ");
	scanf("%d",&b);
	
	printf("The Armstrong Number from %d to %d are: ",a,b);
	for(i=a;i<=b;i++)
	{
		if(isArmstrong(i))
		{
			printf("%d ",i);
		}
	}
	return 0;
}

bool isArmstrong(int n)
{
	int m,result=0,rem;
	m=n;
	while(m>0)
	{
		rem=m%10;
		m=m/10;
		result=result+rem*rem*rem;
	}
	
	if(result==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/*Output:
Enter first number: 1
Enter second number: 500
The Armstrong Number from 1 to 500 are: 1 153 370 371 407
*/
