#include<stdio.h>
void convert(char *p);			//function prototype

int main()
{
	char str[50];
	printf("Enter any String: ");
	scanf("%s",str);
	convert(str);					//function call
	printf("The Converted String is %s",str);
	return 0;
}

void convert(char *p)				//function definition
{
	while(*p!='\0')
	{
		if(*p>=65 && *p<=90)		//Convert Upper Case to Lower Case		
		{
			*p=*p+32;
		}
		else						//Convert Lower Case to Upper Case
		{
			if(*p>=90 && *p<=122)
			{
				*p=*p-32;
			}
		}
		*p++;
	}
}

/*Ouput:
Enter any String: shubham
The Converted String is SHUBHAM

Enter any String: SHUBHAM
The Converted String is shubham

Enter any String: sHUBHAMygs
The Converted String is ShubhamYGS
*/
