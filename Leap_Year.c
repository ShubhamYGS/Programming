#include<stdio.h>
int main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d",&year);
	
	if((year%400)==0)
	{
		printf("The %d is leap year",year);
	}
	else if((year%100)==0)
	{
		printf("The %d is not leap year",year);
	}
	else if((year%4)==0)
	{
		printf("The %d is leap year",year);
	}
	else
	{
		printf("The %d is not leap year",year);
	}
	
	return 0;
}

/*Output:
Enter any year: 1998
The 1998 is not leap year

Enter any year: 2000
The 2000 is leap year
*/
