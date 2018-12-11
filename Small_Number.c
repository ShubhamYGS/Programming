#include<stdio.h>
int main()
{
	int num1,num2,num3;
	int counter;
	while(counter<=2)
	{
		
		printf("\n\nEnter three numbers:\n");
		scanf("%d%d%d",&num1,&num2,&num3);
		if(num1<=num2 && num1<=num3)
		{
			printf("The Smallest Number is: %d",num1);
		}
		else if(num2<=num1 && num2<=num3)
		{
			printf("The Smallest Number is: %d",num2);
		}
		else
		{
			printf("The Smallest Number is: %d",num3);
		}
		counter++;
	}
	return 0;
}

/*Output:
Enter three numbers:
3 4 5
The Smallest Number is: 3

Enter three numbers:
45 3 455
The Smallest Number is: 3

Enter three numbers:
56 54 32
The Smallest Number is: 32
*/
