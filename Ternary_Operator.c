#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Values:\n");
	scanf("%d%d",&a,&b);
	
	//Check which value is greater 
	// expression1?expression2:expression3
	
	a>b?printf("First value is greater %d",a):printf("Second value is greater %d",b);
	return 0;
}

/*Output:
Enter Two Values:
4 5
Second value is greater 5


Enter Two Values:
11 2
First value is greater 11
*/

