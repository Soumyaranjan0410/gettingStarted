***********Aritmetic Operator****************
-------Write a progran to add two values from user & display the result---------------
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
a=1258;
b=12345;
c=a+b;
printf("%d",c);
printf("\n%d",10+20);
printf("\nEnter any two numbers:");
scanf("%d %d",&d,&e);
printf("\nThe addition of the two numbers is:%d\nThe subtraction of the two numbers is:%d\nThe multiplication of the two numbers is:%d\nThe division of the two numbers is:%d",d+e,d-e,d*e,d/e);

getch();
}
***************************************************************************
------------------write a program to display student informtion,accept value from keyboard like idno.,3 subject marks(m1,m2,m3).Find total and average-------------------
#include <stdio.h>
#include <conio.h>
void main()
{
    int Rollno, sub1, sub2, sub3, total;
    float per;
    printf("Enter the Rollno:");
    scanf("%d", &Rollno);
    printf("Enter the Subject1:");
    scanf("%d",&sub1);
    printf("Enter the Subject2:");
    scanf("%d",&sub2);
    printf("Enter the Subject3:");
    scanf("%d",&sub3);
total=sub1+sub2+sub3;
printf("The total is:", &total);
per=total/3.00;
printf("Percentage=%f% \n", per);
if(per>=75)
 {
    printf("distinction");
 }
else if(per<60 && per>=48)
 {
   printf("1st class");
 }
else if(per<48 && per>=36)
 {
   printf("2nd class");
 }
else
    {
       printf("fail");
    }
}
