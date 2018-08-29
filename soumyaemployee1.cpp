#include<iostream>
#include<string>
using namespace std;
int n;
class employee
{
 public:
 int age[50],i;
 string name[100],add[100],str,str1;
 void size()
 {
  cout<<"Enter the no. of employee:";
  cin>>n;
 }
 void get()
 {
   
  cout<<"Name:\t";
  cin>>str;
  name[i]=str;
  cout<<"Age:\t";
  cin>>age[i];
  cout<<"Address:\t";
  cin>>str1;
  add[i]=str1;
 }
 void disp()
 {
   cout<<"\nName:\t"<<name[i];
   cout<<"\nAge:\t"<<age[i];
   cout<<"\nAddress:\t"<<add[i]<<"\n";
 }
};
int main()
{
 int i; 
 employee e[100];
 e[i].size();
 cout<<"Enter The Details Of employees\n\n";
 for(i=0;i<n;i++)
 { 
 cout<<"Employee"<<i+1<<"\n\n";
 e[i].get();
 }
 cout<<"The details of all the employees are:\n";
 for(i=0;i<n;i++)
 {
 cout<<"Employee"<<i+1<<"\n\n";
 e[i].disp();
 }
 return 0;
}
