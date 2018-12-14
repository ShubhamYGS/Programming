#include<stdio.h>
void swap(int x,int y);
int main()
{
	int a=11,b=22;
	printf("Before Swapping:\n");
	printf("a= %d\tb= %d",a,b);
	swap(a,b);
	return 0;
}

void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("\nAfter Swapping:\n");
	printf("a= %d\tb= %d",x,y);
}

/*Output:
Before Swapping:
a= 11   b= 22
After Swapping:
a= 22   b= 11
*/
