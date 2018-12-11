#include<stdio.h>
int main()
{
	int a,b,temp;
	
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("\nEnter Second Number: ");
	scanf("%d",&b);
	printf("\nBefore Swapping the Number are: \n");
	printf("a=%d\t b=%d",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\n\nAfter Swapping the Number are: \n");
	printf("a=%d\t b=%d",a,b);
	
	return 0;
}

/*Output:
Enter First Number: 45

Enter Second Number: 34

Before Swapping the Number are:
a=45     b=34

After Swapping the Number are:
a=34     b=45
*/
