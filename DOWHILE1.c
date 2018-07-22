#include<stdio.h>
#include<conio.h>
int main()   //int main() used for return type statement
{
clrscr();
int num,sum=0;
do
{
printf("\nEnter any number:");
scanf("%d",&num);
sum+=num;
printf("\nThe sum of the numbers is:%d",sum);
}
while(num!=0);
//return shloud be mentioned in loop or else the loop will be infinite
return sum;
}



