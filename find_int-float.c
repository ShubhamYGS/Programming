#include<stdio.h>
#include<string.h>
int main()
{
	char number[10];
	int flag=0;
	int lenght,i=0;
	
	printf("Enter a number: ");
	scanf("%s",number);
	
	// till string does not end
	while(number[i++]!='\0')	// same as while(length-->0)
	{
		if(number[i]=='.')		// decimal point is present
		{	
			flag=1;
			break;
		}
	}
	
	// if(0) is same as if(false)
	if(flag)
	{
		printf("\nEntered Number is Floating point number");
	}
	else
	{
		printf("\nEntered Number is integer number");
	}
	
	return 0;
}

/*Output:
Enter a number: 6.7

Entered Number is Floating point number

Enter a number: 8

Entered Number is integer number
*/
