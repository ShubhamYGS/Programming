#include<stdio.h>
#include<math.h>
/*Simple & Compound interest formula's
Simple Interest = [principle amount(P)*time(T)*rate(R)]/100;
Compound Interest = p(1+r/100)^t;
*/
int main()
{
	float p,t,r,si,ci;
	printf("Enter Principle(Amount): ");
	scanf("%f",&p);
	printf("\nEnter Time: ");
	scanf("%f",&t);
	printf("\nEnter Rate: ");
	scanf("%f",&r);
	
	//Calculate Simple Interest
	si=((p*t*r)/100);
	printf("\nSimple Interest is: %f",si);
	
	//Caculate Compound Interest
	ci=(p*(pow((1+r/100),t)));
	printf("\nCompound Interest is: %f",ci);
	
	return 0;
}

/*Output:
Enter Principle(Amount): 6000

Enter Time: 5

Enter Rate: 7

Simple Interest is: 2100.000000
Compound Interest is: 8415.312500
*/
