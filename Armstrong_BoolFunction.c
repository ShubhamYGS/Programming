#include<stdio.h>
#include<stdbool.h>			//This header file only need to declare in Dev-C++ (stdbool.h is c99 standard)
bool isArmstrong(int n);
int main()
{
	int n;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(isArmstrong(n))
	{
		printf("The %d is Armstrong Number",n);
	}
	else
	{
		printf("The %d is not Armstrong Number",n);
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
Enter the number: 323
The 323 is not Armstrong Number

Enter the number: 371
The 371 is Armstrong Number
*/
