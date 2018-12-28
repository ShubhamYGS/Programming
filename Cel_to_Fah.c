#include<stdio.h>
int main()
{
	int ch;
	float c,f;
	do
	{
	printf("\nEnter your choice: ");
	printf("\n1.Convert Celsius to Fahrenheit\n2.Convert Fahrenheit to Celsius\n3.Exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: //Convert Celsius to Fahrenheit
				printf("\nEnter Temperature in Celcius: ");
				scanf("%f",&c);
				f=((c*9/5)+32);		//0 °C = 32 °F
				printf("\nTemperature in Fahrenheit is: %f",f);
				break;
				
		case 2: //Convert Fahrenheit to Celsius
				printf("\nEnter Temperature in Fahrenheit: ");
				scanf("%f",&f);
				c=((f-32)*5/9);		//0 °F = -17.77778 °C
				printf("\nTemperature in Celcius is: %f",c);
				break;
	}
	}while(ch!=3);
	printf("Program Exited.");
	
	return 0;
}

/*Output:

Enter your choice:
1.Convert Celsius to Fahrenheit
2.Convert Fahrenheit to Celsius
3.Exit
1

Enter Temperature in Celcius: 25

Temperature in Fahrenheit is: 77.000000
Enter your choice:
1.Convert Celsius to Fahrenheit
2.Convert Fahrenheit to Celsius
3.Exit
2

Enter Temperature in Fahrenheit: 25

Temperature in Celcius is: -3.888889
Enter your choice:
1.Convert Celsius to Fahrenheit
2.Convert Fahrenheit to Celsius
3.Exit
3
Program Exited.
*/
