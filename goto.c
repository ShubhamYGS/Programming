#include<stdio.h>
int main()
{
	printf("Hello..!\n");
	goto l1;						//l1 is label
	printf("How are you..?\n");		//This statement will be skipped
	l1 : printf("Hi..!\n");			//control comes here
	
	return 0;
}

/*Output:
Hello..!
Hi..!
*/
