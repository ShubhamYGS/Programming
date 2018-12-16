#include<stdio.h>
int main()
{
	char str[50];
	int i;
	
	printf("Enter any String: ");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)	//Convert Upper Case to Lower Case
		{
			str[i]=str[i]+32;			//A=65 and a=65+32=97
		}
		else							//Convert Lower Case to Upper Case
		{
			str[i]=str[i]-32;			//a=97 and A=97-32=65
		}
	}
	
	printf("The Converted String is %s",str);
	return 0;
}

/*Ouput:
Enter any String: shubham
The Converted String is SHUBHAM

Enter any String: SHUBHAM
The Converted String is shubham

Enter any String: sHUBHAMygs
The Converted String is ShubhamYGS
*/
