#include<stdio.h>
int main()
{
	struct employee
	{
		char name;
		float salary;
		int age;
	};
	
	struct employee e1,e2,e3;		//Declaring Vairables of struct Data types
	
	/*We can also combine the declaration of structure and the structure variables in one statement. */
	/*
	struct employee
	{
		char name;
		float salary;
		int age;
	}e1,e2,e3;
	*/
	
	printf("Enter name of any three Employees: ");
	scanf("%c %c %c",&e1.name,&e2.name,&e3.name);
	printf("\nEnter theie respective salaries: ");
	scanf("%f %f %f",&e1.salary,&e2.salary,&e3.salary);
	printf("\nEnter the age of three Employees: ");
	scanf("%d %d %d",&e1.age,&e2.age,&e3.age);
	
	printf("\nDetails of Employees:");
	printf("\nFirst Employee:\nname: %c\nsalary: %f\nage: %d",e1.name,e1.salary,e1.age);
	printf("\nSecond Employee:\nname: %c\nsalary: %f\nage: %d",e2.name,e2.salary,e2.age);
	printf("\nThird Employee:\nname: %c\nsalary: %f\nage: %d",e3.name,e3.salary,e3.age);
	
	return 0;
}

/*Ouput:
Enter name of any three Employees: A B C

Enter theie respective salaries: 23.4 34.5 23.6

Enter the age of three Employees: 23 32 11

Details of Employees:
First Employee:
name: A
salary: 23.400000
age: 23
Second Employee:
name: B
salary: 34.500000
age: 32
Third Employee:
name: C
salary: 23.600000
age: 11
*/
