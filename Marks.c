#include<stdio.h>
#include<conio.h>
void main()
{
int rollno, sub1, sub2, sub3, total, avg;
printf("Enter the rollno");
scanf("%d", &rollno);
printf("Enter marks of subject 1" );
scanf("%d",&sub1);
printf("Enter marks of subject 2" );
scanf("%d",&sub2);
printf("Enter marks of subject 3" );
scanf("%d",&sub3);
total=sub1+sub2+sub3;
printf("The Total is %d", total);
avg=total/3;
printf("The Average is %d", avg);
if(avg>60)
{

  printf("PASS");
}
else
{

    printf("FAIL");
}
getch();
}
