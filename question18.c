/*18. Write a C program to create a structure named company which has
name, address, phone and no Of Employee as member variables. Read
the name of the company, its address, phone and no Of Employee. Finally
display these members values.*/

#include<stdio.h>
#include<string.h>
struct company{
char name[50];
char address[100];
int phone;
int noOfEmployee;
};
int main(){
struct company c;
printf("Enter the company name: ");
fgets(c.name, sizeof(c.name), stdin);
printf("Enter the company address: ");
fgets(c.address, sizeof(c.address), stdin);
printf("Enter the company phone number: ");
scanf("%d", &c.phone);
printf("Enter the number of employees: ");
scanf("%d", &c.noOfEmployee);
printf("\nCompany Details:\n");
printf("Name: %s", c.name);
printf("Address: %s", c.address);
printf("Phone: %d\n", c.phone);
printf("Number of Employees: %d\n", c.noOfEmployee);
return 0;
}