#include<stdio.h>
int main()
{
	int n,sum=0,r;
	int *p,*q;
	
	printf("Enter any Number: ");
	scanf("%d",&n);
	
	p=&n;
	q=&r;
	
	while(*p>0)
	{
		*q=*p%10;
		sum=sum*10+*q;
		*p=*p/10;
	}
	printf("The Reverse Number is: %d",sum);
	return 0;
}

/*Output:
Enter any Number: 3968
The Reverse Number is: 8693
*/
