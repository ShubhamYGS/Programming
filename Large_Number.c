#include<stdio.h>
int main()
{
	int num1,num2,num3;
	int counter;
	while(counter<=2)
	{
		
		printf("\n\nEnter three numbers:\n");
		scanf("%d%d%d",&num1,&num2,&num3);
		if(num1>=num2 && num1>=num3)
		{
			printf("The Largest Number is: %d",num1);
		}
		else if(num2>=num1 && num2>=num3)
		{
			printf("The Largest Number is: %d",num2);
		}
		else
		{
			printf("The Largest Number is: %d",num3);
		}
		counter++;
	}
	return 0;
}

/*Output:
Enter three numbers:
6 5 1
The Largest Number is: 6

Enter three numbers:
76 45 32
The Largest Number is: 76

Enter three numbers:
766 2 899
The Largest Number is: 899
*/
