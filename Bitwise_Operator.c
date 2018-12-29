#include<stdio.h>
/*
Program to shift inputed data by 2 bits to left
7 = 00000111 (Left shift by 2)
28 = 00011100 (bit is shifted by 2 place to left)
*/

int main()
{
	int n,x;
	printf("Enter any Number: ");
	scanf("%d",&n);					
	n<<=2;			//left shift bitwise operator
	x=n;
	printf("Inputed data shifted by 2 bit to left is: %d",x);
	
	return 0;
}

/*Output:
Enter any Number: 34
Inputed data shifted by 2 bit to left is: 136
*/
