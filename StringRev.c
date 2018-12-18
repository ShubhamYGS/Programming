#include<stdio.h>
void main()
{
	char a[80],b[80];
	int i,j,k;
	
	printf("Enter the String: ");
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++);
		k=i-1;
		
	for(i=k,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	b[j]!='\0';
	printf("Reverse of the String: %s",b);
}

/*Ouput:
Enter the String: Shubham
Reverse of the String: mahbuhS
*/
