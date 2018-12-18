#include<stdio.h>
int main()
{
	int n,sum=0,r;
	
	printf("Enter any Number: ");
	scanf("%d",&n);					//n=1234
	
	while(n>0)						//1234>0 (True)		123>0 (True)		12>0 (True)
	{	
		r=n%10;						//r=1234%10=4		r=123%10=3			r=12%10=2	
		sum=sum*10+r;				//sum=0*10+4=4*		sum=4*10+3=43*		sum=43*10+2=432*
		n=n/10;						//n=1234/10=123		n=123/10=12			n=12/10=1
	}
	printf("The Reverse Number is: %d",sum);
	return 0;
}

/*Ouput:
Enter any Number: 56354
The Reverse Number is: 45365
*/
