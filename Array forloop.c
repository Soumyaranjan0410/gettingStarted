#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],sum=0,i,n,avg;
printf("Total numbers:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d:",i+1);
scanf("%d",&a[i]);
sum+=a[i];
}
avg=sum/n;
printf("The average of the numbers is:%d",avg);
getch();
}