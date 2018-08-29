#include<iostream>
using namespace std;
class Add
{
  public:
  int n1,n2,n3;
  int add(int n1,int n2)
  {
    return n1+n2;
  }
  int add(int n1,int n2,int n3)
  {
    return n1+n2+n3;
  }
};
int main()
{
  Add a;
  cout<<"The Addition of the two numbers(10,20) is:"<<a.add(10,20)<<"\n";
  cout<<"The Addition of the three numbers(10,20,30) is:"<<a.add(10,20,30)<<"\n";
  return 0;
}
  
