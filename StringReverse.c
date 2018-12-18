#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	printf("Enter any String: ");
	scanf("%s",name);
	
	printf("Original String: %s",name);
	printf("\nReverse String: %s",strrev(name));	//strrev() function of String
	return 0;	
}

/*Ouput:
Enter any String: Shubham
Original String: Shubham
Reverse String: mahbuhS
*/
