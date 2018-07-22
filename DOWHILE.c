#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,sum=0;
printf("Enter any number:");
scanf("%d",&num);
do
{
printf("\nEnter next number:");
scanf("%d",&num);
sum+=num;

}
while(num!=0);
printf("\nThe sum of the numbers is:%d",sum);

getch();
}



