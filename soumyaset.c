#include<stdio.h>
void create(int a[],int b[] );
void print(int a[],int b[]);
void Union(int a[],int b[],int c[]);
void intersection(int a[],int b[],int c[]);
void diff(int a[],int b[],int c[]);
void symmdiff(int a[],int b[],int c[]);
int main()
{
int a[20],b[20],c[20];
int x,choice;
do
{
    printf("\n1.Create two sets");
    printf("\n2.Print the two sets");
    printf("\n3.Union");
    printf("\n4.Intersection");
    printf("\n5.Difference");
    printf("\n6.Symmetric Difference");
    printf("\n7.Quit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Create your two sets.");
               create(a,b);
               break;
        case 2: print(a,b);
                break;
        case 3: Union(a,b,c);
                break;
        case 4: intersection(a,b,c);
                break;
        case 5: diff(a,b,c);
                break;
        case 6: symmdiff(a,b,c);
                break;
    }
}
while(choice!=7);
return 0;
}
                        void create(int a[],int b[])
                                    {
                                        int i,j,k,flag,m,n;
                                        printf("\nEnter the size of set1:");
                                        scanf("%d",&n);
                                        printf("Enter the elements:");
                                        a[0]=0;
                                        b[0]=0;
                                        for(i=0;i<n;i++)
                                        scanf("%d",&a[i]);
                                        printf("Enter the size of set2:");
                                        scanf("%d",&m);
                                        printf("Enter the elements:");
                                        for(i=0;i<m;i++)
                                        scanf("%d",&b[i]);
                                        n=a[0];
                                        m=b[0];
                                    }
                        void print(int a[],int b[])
                                    {   int i,m,n;
                                        n=a[0];
                                        m=b[0];
                                        printf("Element of set1 are:{");
                                        for(i=0;i<n;i++)
                                        printf("%d",a[i]);
                                        printf("}");
                                        printf("\nElement of set2 are:{");
                                        for(i=0;i<(m-1);i++)
                                        printf("%d",b[i]);
                                        printf("}");
                                        
                                    }
                        void Union(int a[],int b[],int c[])
                                    {int i,j,k=0,flag,m,n;
                                     n=a[0];
                                     m=b[0]; 
                                     for(i=0;i<n;i++)
                                     {
                                        c[i]=a[i];
                                        k++;
                                     }
                                     for(i=0;i<(m-1);i++)
                                     {
                                        flag=0;
                                        for(j=0;j<n;j++)
                                        {
                                            if(b[i]==c[j])
                                            {
                                                flag=1;
                                                break;
                                            }
                                        }
                                        if(flag==0)
                                        {
                                            c[k]=b[i];
                                            k++;
                                        }
                                     }
                                     printf("The union of the two sets:{");
                                     for(i=0;i<(k);i++)
                                     printf("%d",c[i]);
                                     printf("}");
                                    }
                void intersection(int a[],int b[],int c[])
                                    {   int i,j,k,m,n;
                                        n=a[0];
                                        m=b[0];
                                        k=0;
                                        for(i=0;i<n;i++)
                                        {
                                            for(j=0;j<(m-1);j++)
                                            {
                                                if(a[i]==b[j])
                                                {
                                                    c[k]=a[i];
                                                    k++;
                                                }
                                            }
                                        }
                                        printf("The intersection of the two sets:{");
                                        for(i=0;i<(k);i++)
                                        printf("%d",c[i]);
                                        printf("}");
                                    }
                        void diff(int a[],int b[],int c[])
                                    {   int i,j,k,m,n;
                                        k=0;
                                        n=a[0];
                                        m=b[0];
                                        for(i=0;i<n;i++)
                                        {
                                            
                                            for(j=0;j<(m-1);j++)
                                            {
                                                if(a[i]!=b[j])
                                                {
                                                    c[k]=a[i];
                                                    k++;
                                                    break;
                                                }
                                            }
                                        }
                                        printf("The Difference of the two sets:{");
                                        for(i=0;i<(k);i++)
                                        printf("%d",c[i]);
                                        printf("}");
                                    }
                    void symmdiff(int a[],int b[],int c[]) 
                                    {   int i,j,k,m,n;
                                        k=0;
                                        n=a[0];
                                        m=b[0];
                                        for(i=0;i<n;i++)
                                        {
                                            for(j=0;j<(m-1);j++)
                                            {
                                                if(a[i]!=b[j])
                                                {
                                                    c[k]=a[i];
                                                    k++;
                                                    
                                                }
                                                if(b[j]!=a[i])
                                                {
                                                    c[k]=b[j];
                                                    k++;
                                                }
                                            }
                                        }
                                        printf("The symmetric difference of the two sets:{");
                                        for(i=0;i<(k);i++)
                                        printf("%d",c[i]);
                                        printf("}");
                                    }
                                    
