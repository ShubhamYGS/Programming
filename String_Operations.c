#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]="Welcome";
	char str2[]="ShubhamYGS";
	char str3[]="ShubhamYGS";
	char copy[20];
	
	//strlen() = Finds length of a string
	printf("\t\t\tUse of strlen()");
	printf("\nThe Length of %s is %d",str1,strlen(str1));
	printf("\nThe Length of %s is %d",str2,strlen(str2));
	
	//strcpy() = Copies a string into another
	printf("\n\n\n\t\t\tUse of strcpy()");
	strcpy(copy,str1);					//strcpy(copied,original);
	printf("\nOriginal String is %s",str1);
	printf("\nCopied String is %s",copy);
	
	//strcat() = Appends one string at the end of another
	printf("\n\n\n\t\t\tUse of strcat()");
	strcat(str1,str2);					//strcpy(destination,original);
	printf("\nOriginal String: %s",str2);
	printf("\nThe concatenated String: %s",str1);
	
	//strcmp() = Compares two strings
	printf("\n\n\n\t\t\tUse of strcmp()");
	printf("\nFirst String is: %s",str1);
	printf("\nSecond String is: %s",str2);
	printf("\nThird String is: %s",str3);
	if(strcmp(str1,str2)==0)
	{
		printf("\nFirst and Second String is same");
	}
	else if(strcmp(str2,str3)==0)
	{
		printf("\n\nSecond and Third String are same");
	}
	else
	{
		printf("\nBoth Strings are different");
	}
	
	//strlwr() = Converts a string to lowercase
	printf("\n\n\n\t\t\tUse of strlwr()");
	printf("\nThe original string is: %s",str3);
	printf("\nThe Lowercase string is: %s",strlwr(str3));
	
	//strupr() = Converts a string to lowercase
	printf("\n\n\n\t\t\tUse of strupr()");
	printf("\nThe original string is: %s",str3);
	printf("\nThe Lowercase string is: %s",strupr(str3));

	return 0;
}

/*Output:

                        Use of strcpy()
Original String is Welcome
Copied String is Welcome


                        Use of strcat()
Original String: ShubhamYGS
The concatenated String: WelcomeShubhamYGS


                        Use of strcmp()
First String is: WelcomeShubhamYGS
Second String is: ShubhamYGS
Third String is: ShubhamYGS

Second and Third String are same


                        Use of strlwr()
The original string is: ShubhamYGS
The Lowercase string is: shubhamygs


                        Use of strupr()
The original string is: shubhamygs
The Lowercase string is: SHUBHAMYGS
*/
