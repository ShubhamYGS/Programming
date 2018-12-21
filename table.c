#include<stdio.h>
int main()
{
	int i,num,res;
	printf("Which table you want: ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		res=num*i;
		printf("%d\n",res);
	}
	
	return 0;
}

/*Output:
Which table you want: 12
12
24
36
48
60
72
84
96
108
120
*/
