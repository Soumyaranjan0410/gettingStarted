//================ MOCK TEST 1===============
//=======
#include<stdio.h>
int main()
{
  int a[10],b[10],c[10],n,m,i,j,k,fl,ch;
  printf("Enter Size Of Set A:");
  scanf("%d",&n);
  printf("Enter The Elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]); 
  }
  printf("Enter Size Of Set B:");
  scanf("%d",&m);
  printf("Enter The Elements:");
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]); 
  }
  printf("SET A:{");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]); 
  }
  printf("}");
  printf("SET B:{");
  for(i=0;i<m;i++)
  {
    printf("%d",b[i]); 
  }
  printf("}");
  do
  {
  printf("\n1.Union\n2.Intersection\n3.A-B\n4.B-A\n5.Symmetric Difference\n6.Quit\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
           k=0;
           for(i=0;i<n;i++)
           {
             c[k]=a[i];
             k++;
           }
           for(i=0;i<n;i++)
           {
             for(j=0;j<m;j++)
             {
               if(b[i]==a[j])
               {
                 fl=0;
                 break;
               } 
               else
               fl=1;
             }
             if(fl==1)
             {
               c[k]=b[i];
               k++;
             }
           }
           printf("Union Of The 2 Sets:{");
           for(i=0;i<k;i++)
           {
             printf("%d",c[i]); 
           }
           printf("}\n");
           break;
    case 2:
           k=0;
           for(i=0;i<n;i++)
           {
             for(j=0;j<m;j++)
             {
               if(a[i]==b[j])
               {
                 c[k]=a[i];
                 k++;
               }
             }
           }
           printf("The Intersection of two sets is:{");
           for(i=0;i<k;i++)
           {
             printf("%d",c[k]); 
           }
           printf("}\n");
           break;
   case 3:
          k=0;
          for(i=0;i<n;i++)
           {
             for(j=0;j<m;j++)
             {
               if(a[i]==b[j])
               {
                 fl=0;
                 break;
               }
               else
               fl=1;
             }
             if(fl==1)
             {
               c[k]=a[i];
               k++;
             }
           }
          printf("The Difference A-B:{");
          for(i=0;i<k;i++)
           {
             printf("%d",c[i]); 
           }
           printf("}\n");
           break;
          
   case 4:
          k=0;
          for(i=0;i<m;i++)
           {
             for(j=0;j<n;j++)
             {
               if(b[i]==a[j])
               {
                 fl=0;
                 break;
               }
               else
               fl=1;
             }
             if(fl==1)
             {
               c[k]=b[i];
               k++;
             }
           }
          printf("The Difference A-B:{");
          for(i=0;i<k;i++)
           {
             printf("%d",c[i]); 
           }
           printf("}\n");
           break;
   case 5:
          k=0;
          for(i=0;i<n;i++)
           {
             for(j=0;j<m;j++)
             {
               if(a[i]==b[j])
               {
                 fl=0;
                 break;
               }
               else
               fl=1;
             }
             if(fl==1)
             {
               c[k]=a[i];
               k++;
             }
           }
          for(i=0;i<m;i++)
           {
             for(j=0;j<n;j++)
             {
               if(b[i]==a[j])
               {
                 fl=0;
                 break;
               }
               else
               fl=1;
             }
             if(fl==1)
             {
               c[k]=b[i];
               k++;
             }
           }
          printf("The Symmetric Difference is:{");
          for(i=0;i<k;i++)
           {
             printf("%d",c[i]); 
           }
           printf("}\n");
           break;
   case 6:
          printf("Bye");
          break;

   default:printf("Enter your choice in between 1-6.");              
                 
  }
  }
  while(ch!=6); 
return 0;
}
//----------------------output---------------------
/*Enter Size Of Set A:2
Enter The Elements:2 3
Enter Size Of Set B:2
Enter The Elements:3 4
SET A:{23}SET B:{34}
1.Union
2.Intersection
3.A-B
4.B-A
5.Symmetric Difference
6.Quit
Enter your choice:1
Union Of The 2 Sets:{234}

1.Union
2.Intersection
3.A-B
4.B-A
5.Symmetric Difference
6.Quit
Enter your choice:2
The Intersection of two sets is:{3}

1.Union
2.Intersection
3.A-B
4.B-A
5.Symmetric Difference
6.Quit
Enter your choice:3
The Difference A-B:{2}

1.Union
2.Intersection
3.A-B
4.B-A
5.Symmetric Difference
6.Quit
Enter your choice:4
The Difference A-B:{4}

1.Union
2.Intersection
3.A-B
4.B-A
5.Symmetric Difference
6.Quit
Enter your choice:5
The Symmetric Difference is:{24}

1.Union
2.Intersection
3.A-B
4.B-A
5.Symmetric Difference
6.Quit
Enter your choice:6
Bye
*/

    
