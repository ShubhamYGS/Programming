#include<stdio.h>
int main()
{
	const float pi=3.14;
	float r,area,cum;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	
	//Calculate Area of the Circle
	area=pi*(r*r);
	printf("\nArea of the Circle is: %f",area);
	
	//Calculate Circumference of the Circle
	cum=(2*pi*r);
	printf("\nCircumference of the Circle is: %f",cum);
	
	return 0;
}

/*Output:
Enter the radius of circle: 5

Area of the Circle is: 78.500000
Circumference of the Circle is: 31.400002
*/
