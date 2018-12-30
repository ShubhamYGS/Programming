//Addition of Two numbers using Pointer (*)

#include<stdio.h>
int main()
{
	int num1,num2,*p,*q,sum;
	
	printf("Enter Two Numbers: ");
	scanf("%d%d",&num1,&num2);
	
	p=&num1;		//p=6487608
	q=&num2;		//q=6487604

	sum=*p+*q;		//*p=4 & *q=5
	printf("Sum of %d & %d is %d",num1,num2,sum);
	
	return 0;
}

/*output:
Enter Two Numbers: 4 5
Sum of 4 & 5 is 9
*/
