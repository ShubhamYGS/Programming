#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter First Number: ");
	scanf("%d",&num1);
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	printf("\nBefore Swapping:\n");
	printf("Num1: %d\tNum2: %d",num1,num2);
	
	//Suppose num1=10 & num2=20
	num1=num1+num2;			//num1=10+20	num1=30
	num2=num1-num2;			//num2=30-20	num2=10*
	num1=num1-num2;			//num1=30-10	num1=20*
	
	printf("\n\nAfter Swapping:\n");
	printf("Num1: %d\tNum2: %d",num1,num2);
	return 0;
}

/*Output:
Enter First Number: 87
Enter Second Number: 34

Before Swapping:
Num1: 87        Num2: 34

After Swapping:
Num1: 34        Num2: 87
*/
