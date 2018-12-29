#include<stdio.h>
int main()
{
	float length,i,sum=0;
	
	printf("Enter the length of Series: ");
	scanf("%f",&length);
	
	for(i=1;i<=length;i++)
	{
		sum=sum+1/i;		//It calculates Sum of Series
		
		//Print the Series
		if(i==1)
		{
			printf("Series: %f +",i);
		}
		else if(i==length)
		{
			printf(" (1/%f)",length);
		}
		else
		{
			printf(" (1/%f) +",i);
		}
	}
	
	printf("\nThe Sum of Series from 1 to 1/%f is %f",length,sum);
	
	return 0;
}

/*Output:
Enter the length of Series: 5
Series: 1.000000 + (1/2.000000) + (1/3.000000) + (1/4.000000) + (1/5.000000)
The Sum of Series from 1 to 1/5.000000 is 2.283334
*/
