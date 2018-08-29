#include<iostream>
using namespace std;
class A
{
  public:
  void display()
  {
    cout<<"Super class function\n";
  }
};
class B:public A
{
  public:
  void display()
  {
    cout<<"Sub class function\n";
  }
};
int main()
{
  A a;
  a.display();
  B b;
  b.display();
  return 0;
}
