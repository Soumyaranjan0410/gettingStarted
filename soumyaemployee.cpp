#include<iostream>
#include<string>
using namespace std;
class employee
{
 public:
 int n,age[50],i;
 string name[100],add[100],str,str1;
 void size()
 {
  cout<<"Enter the no. of employee:";
  cin>>n;
 }
 void get()
 {
  for(i=0;i<n;i++)
  {
  cout<<"Enter the name of employee:\t";
  cin>>str;
  name[i]=str;
  cout<<"Enter the age of the employee:\t";
  cin>>age[i];
  cout<<"Enter the address of the employee:\t";
  cin>>str1;
  add[i]=str1;
  } 
 }
 void disp()
 { 
   for(i=0;i<n;i++)
   {
   cout<<"The details of all the employees are:\n";
   cout<<"Employee"<<i+1<<"\n\n";
   cout<<"\nName:\t"<<name[i];
   cout<<"\nAge:\t"<<age[i];
   cout<<"\nAddress:\t"<<add[i];
   }
 }
};
int main()
{
 employee e;
 e.size();
 e.get();
 e.disp();
 return 0;
}
